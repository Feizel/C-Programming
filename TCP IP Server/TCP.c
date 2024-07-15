#include <stdio.h>

// ETHERNET FRAMEWORK FORMAT
// #include <linux/if_ether.h>

struct eth_hdr
{
  unsigned char dmac[6];
  unsigned char smac[6];
  uint16_t ethertype;
  unsigned char payload[];
} _attribute_((packed));

int main()
{

  
}


