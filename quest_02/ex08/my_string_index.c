#include <stdio.h>

int my_string_index(char* param_1, char param_2){
    int index = 0;
    while(param_1[index] != 0){
        if(param_2 != param_1 [index]){
            index++;
        }else {
            return index;
        }
        
    }
    if( param_1[index] == 0 && param_2 != param_1 [index]){
        index = -1;
    }
    return index;
}