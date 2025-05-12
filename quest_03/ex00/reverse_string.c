#include <stdio.h>

char* reverse_string(char* param_1){

  int index = 0;
  int index_1 =0;
  char string[300] = "";

  while(param_1[index] != 0){
    index ++;
  }
  while(index != 0){
    index--;
    string[index_1] = param_1[index];
    index_1++;
  }
  index = 0;
  while(param_1[index] != '\0') {
      param_1[index] = string[index];
      index++;
  }
  return param_1;
} 