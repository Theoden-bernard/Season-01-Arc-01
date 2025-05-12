#include <stdbool.h>
#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

#define ASC 0
#define DESC 1
#define NO_ORDER 2

int get_order(int num_1, int num_2){
    if (num_1 > num_2){
        return DESC;        
    }
    if (num_1 < num_2){
        return ASC;        
    }

    return NO_ORDER;
}
int respect_order(int respect, int num_1, int num_2){
    if (respect == DESC && num_1 < num_2){
        return false;
    }
    if (respect == ASC && num_1 > num_2){
        return false;
    }
    return true;
}

bool my_is_sort(integer_array* test){
    int index = 0;
    int order = NO_ORDER;
    bool result = true;

    while (index < test->size - 1 && result == true) {
        result = respect_order(order,test->array[index], test->array[index + 1]);
        order = get_order(test->array[index], test->array[index + 1]);
        index++;
    }
    return result;
}