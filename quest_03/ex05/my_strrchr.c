#include <stdio.h>

char* my_strrchr(char* param_1, char param_2){
    int index = 0;

    while(param_1[index] != '\0'){
        index++;
    }
    while(param_1[index] != param_2 && index != 0){
        index--;
    }
    if(index == 0 && param_1[index] != param_2){
        return 0;
    }
    return &param_1[index];
}