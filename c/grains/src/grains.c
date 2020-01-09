#include "grains.h"

uint64_t square(uint8_t index){
  uint64_t res = 1;

  if (index > 64 || index < 1){
    return 0;
  }
  else if (index == 1){
    return res;
  }
  else{
    return res << (index-1);
  }

}

uint64_t total(void){
  uint64_t res = 0;

  for (uint64_t i = 1; i <= 64; i++){
    res = res | square(i);
  }

  return res;
}
