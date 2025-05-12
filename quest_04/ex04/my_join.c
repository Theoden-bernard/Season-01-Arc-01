#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_strlen(char* word){
  int index = 0;

  while(word[index] != 0){
    index += 1;  
  }
  return index;
}

char* my_strcpy(char* dest, char* src){

  int index = 0;
  int size = 0;
  while (src[index] != 0){
    size = my_strlen(dest);
    dest[size] = src[index];
    index += 1;
  }
  return dest;
}

char *my_join(string_array *struct_value, char* between){
  char *final_string;
  int size = 0;
  int index = 0;

    if (struct_value->array == 0) {
        return 0;
    }

  while (index != struct_value->size){
    
    size += my_strlen(struct_value->array[index]);
    index += 1;
  }
  
  final_string = malloc(sizeof(char)* size);

  index = 0;
  while (index != struct_value->size){

    final_string = my_strcpy(final_string, struct_value->array[index]);
    if (index != struct_value->size - 1){
      
      my_strcpy(final_string, between);
    }
    
    index += 1;
  }
  
  return final_string;
}

/*int main(){
    string_array value_of_struct;
    char *string[] = {"abc", "def", "gh"};
    int size = 3; 
    value_of_struct.array = string;
    value_of_struct.size = size;
    my_join(&value_of_struct, "-");
}*/