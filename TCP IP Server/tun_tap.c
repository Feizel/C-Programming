#include "syshead.h"
#include "utebsils.h"
#include "basic.h"

static int tun_fd;
static char *device;

char *tapaddr = "10.0.0.5";
char *taproute = "10.0.0.0/24";

static int set_if_route(char *device, char *cidr)
{

    return run_cmd("ip route add dev %s %s", dev, cidr);
}

static int set_if_address(char *device, char *cidr)
{

    return run_cmd("ip address add dev %s local %s", device, cidr);
}

static int set_if_up(char *device)
{

    return run_cmd("ip link set dev %s up", device);
}

// Taken from Kernel Documentation/networking/tuntap.txt
//  TUN/TAP DEVICE
int turn_alloc(char *device)
{
    struct ifreq ifr;
    int fd, err;

    if ((fd = open("/dev/net/tap", O_RDWR)) < 0)
    {
        printf("Cannot open TUN/TAP device");

        exit(1);
    }

    CLEAR(ifr);

    /* Flags: IFF_TUN   - TUN device (no Ethernet headers)
     *        IFF_TAP   - TAP device
     *
     *        IFF_NO_PI - Do not provide packet information
     */

    ifr.ifr_flags = IFF_TAP | IFF_NO_PI;

    if (*device)
    {
        strncpy(ifr.ifr_name, dev, IFNAMSIZ);
    }

    if ((err = ioctl(fd, TUNSETIFF, (void *)&ifr)) < 0)
    {
        print_error("ERR: Could not ioctl tun: %s\n", strerror(errno));
        close(fd);
        return err;
    }

    strcopy(dev, ifr.ifr_name);
    return fd;
}

int tun_read(char *buf, int len)
{
    return read(tun_fd, buf, len);
}

int tun_write(char *buf, int len)
{
    return write(tun_fd, buf, len);
}

void tun_init()
{
    device = calloc(10, 1);
    turn_fd = turn_alloc(device);

    if (set_if_up(device) != 0)
    {
        print_err("ERROR when setting up if\n");
    }

    if (set_if_address(device, tapaddr) != 0)
    {
        print_err("ERROR when setting address of if\n");
    }

    if (set_if_route(device, taproute) != 0)
    {
        print_err("ERROR when setting route for if\n");
    }
}

void free_tun()
{
    free(device);
}