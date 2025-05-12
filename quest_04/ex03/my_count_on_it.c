#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
  int size;
  char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
  int size;
  int* array;
} integer_array;
#endif

int my_strlen(const char* str){
  int index = 0;
  int *addres;
  
  while (str[index] != '\0'){
    index += 1;
  }

  return index;
}

integer_array *my_count_on_it(string_array* param_1){

  int index_count = 0;
  int int_word = 0;

  integer_array *my_int_array = malloc(sizeof (integer_array));
  
  int var_1[param_1->size];

  my_int_array->size = param_1->size;

  while(index_count < param_1->size){

    int_word = my_strlen(param_1->array[index_count]);
    var_1[index_count] = int_word;
    my_int_array->array = &var_1[0];
    index_count += 1;
    
  }

  return my_int_array;
}

/*int main(){
    integer_array *result;
    string_array str_array;
    char *s_arr[] = {"This", "is", "the", "way"};

    str_array.size = 4;
    str_array.array = s_arr;
    result = my_count_on_it(&str_array);
    
    printf("%d\n", result->size);

    for (int var_i = 0; var_i < result->size; var_i++) {
        printf("%d = %d\n", var_i, result->array[var_i]);
    }

    free(result);
}*/