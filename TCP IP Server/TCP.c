#include <stdio.h>
#include <stdint.h>
#include <winsock2.h>

struct eth_hdr
{
  unsigned char dmac[6];
  unsigned char smac[6];
  uint16_t ethertype;
  unsigned char payload[];
} __attribute__((packed));

int main()
{

  return 0;
}