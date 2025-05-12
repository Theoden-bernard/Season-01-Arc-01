#include <stdio.h>
#include <stdlib.h>

int str_len(char *str){
    char *tmp = str;
    while(*tmp++);
    return (tmp - str);
   
}

char* my_strdup(char* param_1){
    int size = str_len(param_1);
    char *storage = malloc(sizeof(char) * size);
    int index = 0;

    while (index < size) {
        storage[index] = param_1[index];
        index += 1;

    }
    
    return storage;

}

/*int main(){
    char* storages = my_strdup("abc");
    free(storages);
    return 0;
}*/