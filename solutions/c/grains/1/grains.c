#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index){
  return (uint64_t)1 << (index - 1);
}
uint64_t total(void){
   uint64_t sum = 0;

    for(int i = 1; i <= 64; i++)
    {
        sum += square(i);
    }

    return sum;
}

