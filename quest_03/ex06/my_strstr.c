#include <stdio.h>

char* my_strstr(char* param_1, char* param_2){
    int index = 0;
    int index_2 = 0;
    int compte = 0;
    int stock = 0;
    int good = 0;

    while(param_1[index] != param_2[index_2] && param_1[index] != '\0'){
        index++;
    }
    while (param_2[compte] != '\0') {
        compte++;
    }
    stock = index;
    while(param_1[index] == param_2[index_2]){
        index++;
        index_2++;
        good++;
    }
    if(param_1 == param_2){
        return param_1;
    }
    if(index_2 < compte && param_1[index] == '\0'){
        return 0;
    }

    if(compte == 0){
        return param_1;
    }

    if(good < compte){
        index_2 = 0;
        stock = index - 1;
        good = 1;
        while(param_1[index] != param_2[index_2]){
            index++;
            index_2++;
            good++;
        }
        index = index - 1; 
        while (param_1[index] == param_2[index_2] && good < compte) {
            index++;
            index_2++;
            good++;
            if(param_1[index] != param_2[index_2]){
                good = 0;
            }
            
        }
        if (param_2[index_2] != param_1[index] && good == 0) {
            return 0;
        }
       
    }
    return &param_1[stock];
}