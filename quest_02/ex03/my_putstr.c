#include <stdio.h>

void my_putstr(char *param_1){
    int index = 0;
    char word = 0;
    while(param_1[index] != 0){
        word = param_1[index];
        putchar(word);
        index += 1;
    }
}