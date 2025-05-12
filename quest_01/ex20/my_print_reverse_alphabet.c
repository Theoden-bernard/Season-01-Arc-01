#include <stdio.h>

void my_print_reverse_alphabet(){
    char n = '\n';
    char lettre = 122;
    while(lettre > 96){
        putchar(lettre);
        lettre-=1;
    }
    putchar(n);
}