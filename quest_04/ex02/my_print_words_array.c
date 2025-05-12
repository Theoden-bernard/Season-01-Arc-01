#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array{
    int size;
    char** array;
}string_array;
#endif

static int my_strlen(const char* str){
    
    int index = 0;

    while (str[index] != '\0') {
        
        index += 1;

    }
    return index;
}

void my_print_words_array(string_array* param_1){
    
    int index = 0;
    while (index < param_1->size) {

        write(1, param_1->array[index], my_strlen(param_1->array[index]));
        write(1, "\n", 1);
        index++;

    }

}