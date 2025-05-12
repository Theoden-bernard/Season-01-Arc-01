#include <stdio.h>

char* my_downcase(char* param_1){
    int index = 0;
    int num = 32;

    while(param_1[index] != 0){
        if(param_1[index] >= 65 && param_1[index] <= 90){
            param_1[index] = param_1[index] + num;
        }
        index++; 
    }
    return param_1;
}