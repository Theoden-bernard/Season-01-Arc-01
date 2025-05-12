#include <stdio.h>

int my_abs(int param_1){
    if(param_1 < 0){
        param_1 = param_1 * -1;
        return param_1;
    }else{
        param_1 = param_1;
        return param_1;
    }
}