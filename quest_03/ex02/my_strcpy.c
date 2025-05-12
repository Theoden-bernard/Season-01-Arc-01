#include <stdio.h>

char* my_strcpy(char* param_1, char* param_2){
    int index_2 = 0;
    while(param_2[index_2] != '\0'){
        param_1[index_2] = param_1[index_2] + param_2[index_2];
        index_2++;
    }
    param_1[index_2] = '\0';
    return param_1;
}