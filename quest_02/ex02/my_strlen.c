#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* param_1){
  int index = 0;
  while(param_1[index] != 0){
    index += 1;
  }
  return index;
}

int my_function()
{
  int length = my_strlen("");
  printf("%d", length);
  return 0;
}