#include <stdio.h>
#include <stdlib.h>

char* my_strncpy(char* param_1, char* param_2, int param_3){
    int index = 0;
    while(index < param_3 && param_2[index] != '\0'){
        param_1[index] = param_2[index];
        index++;
    }
    param_1[index] = '\0';

    return param_1;
}