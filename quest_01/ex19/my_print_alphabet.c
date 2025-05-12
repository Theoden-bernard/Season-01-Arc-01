#include <stdio.h>

void my_print_alphabet(){
  char lettre = 97;
  char n = '\n';
  while(lettre <= 122){
    putchar(lettre);
    lettre++;
  }
  putchar(n);
}