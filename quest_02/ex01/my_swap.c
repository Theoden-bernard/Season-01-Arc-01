#include <stdio.h>

void my_swap(int *param_1, int *param_2){
    int stockage = 0;
    stockage = *param_1;
    *param_1 = *param_2;
    *param_2 = stockage;
}

int my_function(){
    int variable_a = 12;
    int variable_b = 21;
    printf("A - %d ** B - %d\n", variable_a, variable_b);
    my_swap(&variable_a, &variable_b);
    printf("A - %d ** B - %d\n", variable_a, variable_b);
}