#include <stdio.h>

char* my_strchr(char* param_1, char param_2){
    int index =0;
    while(param_1[index] != param_2 && param_1[index] != '\0'){
        index++;
    }
    if(param_1[index] == '\0'){
        return 0;
    }
    return &param_1[index];
}