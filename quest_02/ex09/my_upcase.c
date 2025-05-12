#include <stdio.h>

char* my_upcase(char* param_1){
    int index = 0;
    int num = 32;
    //char string = "";
    
    while(param_1[index] != '\0'){
        if(param_1[index] >= 97 && param_1[index] <= 122){
            param_1[index] = param_1[index] - num;
        }
        index++;
    }
    return param_1;
}