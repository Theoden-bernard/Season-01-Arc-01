#include <stdio.h>
#include <stdlib.h>

void print_array(int* array){
    int index = 0;

    while (index != 256) {        
        if (array[index] > 0) {
            printf("%c:%d\n",index, array[index]);
        }
        index += 1;
    }
}

void ngram(int ac, char **av, int *array) {
    int index = 1;
   
    while(index < ac){
        char *string = av[index];

        while(*string) {
            array[(int)*string] += 1;
            string += 1;
        }
        index += 1;
    }
}

void my_bzero(int *array, int size, char c) {
    while (size >= 0) {
        array[size] = c;
        size -= 1;
    }
}

int main(int ac, char** av){
    int array[256];
    my_bzero(array, 256, 0);

    ngram(ac, av, array);
    print_array(array);
}