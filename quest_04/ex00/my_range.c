#include <stdio.h>
#include <stdlib.h>

int* my_range(int min, int max){
    int size = max - min;
    int* storages = malloc(sizeof(int) * size);
    int index = 0;
    int number = min;

    while (number < max) {
        
        storages[index] = number;
        index += 1;
        number += 1;
    }
    
    return storages;
}

/*int main(){
    int* storages = my_range(1 , 4);
    free(storages);
    return 0;
}*/