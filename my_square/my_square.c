#include <stdio.h>
#include <stdlib.h>

int init(int integer, char charactere){
    
    int index = 48;
    while (index != charactere) {
        
        index += 1;
        integer += 1;
    }

    integer = integer * 10;
    return integer;
}

int char_in_to_int(char* av){

    int integer = 0;
    int index = 48;
    int index_av = 0;

    while (av[index_av] != 0) {
        
        index += 1;
        integer = init(integer, av[index_av]);
        index_av += 1;
        
    }
    integer = integer / 10;
    return integer;
}

void what_print(char first_print, char second_print, int index, int x){

    if (index == 0 || index == x - 1) {
        printf("%c", first_print);
    }
    else {
        printf("%c", second_print);
    }
}

void lenth(char* my_square, int x){

    int index = 0;
    while (index < x) {
        
        what_print('o', '-', index, x);
        index += 1;
    }
}

void height(char* my_square, int x){

    int index = 0;
    while (index < x ) {
        
        what_print('|', ' ', index, x);
        index += 1;
    }

    printf("\n");
}

void creat_square(int x, int y, char* my_square ){
    
    int index = 0;
    lenth(my_square, x);
    printf("\n");
    if (y > 1) {

        while (index < y - 2) {
        
            height(my_square, x);
            index += 1;
        }

        lenth(my_square, x);
        printf("\n");
    }

}

int main(int ac, char **av){
    
    if (ac > 2) {

        int index = 1;
        int x = char_in_to_int(av[index]);

        index += 1;
        int y = char_in_to_int(av[index]);
        char* my_square = malloc(sizeof(char)* x * y);
        if (x != 0 && y != 0) {

            creat_square(x, y, my_square);
        }
    }
    
    return 0;
}