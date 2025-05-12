#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_COORDINATE_ARRAY
#define STRUCT_cooRDINATE_ARRAY
typedef struct s_cordinate_array
{
    int x;
    int y;
    int direction_num;
    char* direction;
} cordinate_array;
#endif

int my_strlen(char *num){
    int index = 0;
    while (num[index] != '\0') {

        index += 1;
    }
    return index;
}

int int_len(int num){

    int index = 0;

    while (num != 0) {
        num = num / 10;
        index += 1;
    }
    
    return index;
}

char* mcpy(int source , char* stock, int index){


    if(source < 0){
        stock[index] = '-';
        source = source * -1; 
        index += 1;
        stock[index] = source + '0';
        return stock;
    }
    
    stock[index] = source + '0';

    return stock;
}

char* string_inverse(char* src, int size){
    
    char* dst = malloc(int_len(size));
    int index = 0;
    int index_2 = size - 1;

    while (index < size + 1) {
        dst[index] = src[index_2];
        index += 1;
        index_2 -= 1;
    }

    return dst;
}

char* division(int num){
    
    char* string = malloc(int_len(num));
    int size = int_len(num);
    int index = 0;

    if (num == 0) {
        string[0] =  48;
    }

    while (num != 0) {
        
        string = mcpy(num % 10, string, index);
        num = num / 10;
        index += 1;
    }
    
    return string;
}

char* int_to_str(int num) {
    
    int index = 0;
    char* str = malloc(int_len(num));
    str = division(num);
    return str;
}

void initialise(cordinate_array* value_of_struct){

    value_of_struct->x = 0;
    value_of_struct->y = 0;
    value_of_struct->direction_num = 0;
    value_of_struct->direction = "up";
}


char* reset_direction(cordinate_array direction, char* dst){

    int index = 0;
    while (index < my_strlen(dst)) {
        
        dst[index] = 27;
        index += 1;
    }
    direction.direction = dst;
    return dst;
}

void assign_direction(char* src, cordinate_array* positioning){
    char* dst = malloc(sizeof(char) * my_strlen(src));
    int index = 0;

    reset_direction(*positioning, dst);

    while (src[index] != 0) {
        
        dst[index] = src[index];
        index += 1;
    }

    positioning->direction = dst;
}

void turn_left(cordinate_array* positioning){
    
    positioning->direction_num -= 1;

    if (positioning->direction_num == 0 || positioning->direction_num == 4 || positioning->direction_num == -4){

        assign_direction("up\0", positioning);

    }

    if (positioning->direction_num == -1 || positioning->direction_num == 3){

        assign_direction("left\0", positioning);
    }
    
    if (positioning->direction_num == 1 || positioning->direction_num == -3){

        assign_direction("right\0", positioning);
    }

    if (positioning->direction_num == 2 || positioning->direction_num == -2){

        assign_direction("down\0", positioning);
    }
}

void turn_right(cordinate_array* positioning){
    
    positioning->direction_num += 1;

    if (positioning->direction_num == 0 || positioning->direction_num == 4 || positioning->direction_num == -4){

        assign_direction("up\0", positioning);
    }

    if (positioning->direction_num == -1 || positioning->direction_num == 3){

        assign_direction("left\0", positioning);
    }
    
    if (positioning->direction_num == 1 || positioning->direction_num == -3){

        assign_direction("right\0", positioning);
    }

    if (positioning->direction_num == 2 || positioning->direction_num == -2){

        assign_direction("down\0", positioning);
        
    }
}


void adence(cordinate_array* positioning){
    
    if (positioning->direction_num == 0 || positioning->direction_num == 4 || positioning->direction_num == -4){

        assign_direction("up\0", positioning);
        positioning->y -= 1;
    }

    if (positioning->direction_num == -1 || positioning->direction_num == 3){

        assign_direction("left\0", positioning);
        positioning->x -= 1; 
    }
    
    if (positioning->direction_num == 1 || positioning->direction_num == -3){

        assign_direction("right\0", positioning);
        positioning->x += 1; 
    }

    if (positioning->direction_num == 2 || positioning->direction_num == -2){

        assign_direction("down\0", positioning);
        positioning->y += 1; 
    }
    
}

void string_concatenate (char *src, char *param, int* index_final_sting) {

    int index = 0;
    while (param[index] != 0) {

        src[*index_final_sting] = param[index]; 
        index += 1;
        *index_final_sting += 1;
    }

}

void my_bzero(char* str, int size){
    int index = 0;

    while (index < size) {
        str[index] = 0;
        index += 1;
    }
}

char* init_str(int size){
    char *str = malloc(size);

    my_bzero(str, size);

    return str;
}


char *read_(char* instruction, cordinate_array value_spaceshipe){

    int index = 0;
    int length_instruction = 0;
    char *finalie_coordinate = malloc(sizeof(char) * 150);
    int index_final_sting = 0;


    length_instruction = my_strlen(instruction);

    while (index < length_instruction){

        if (instruction[index] == 'L') {
            
            turn_left(&value_spaceshipe);
        }
        if (instruction[index] == 'R') {

            turn_right(&value_spaceshipe);
        }
        if (instruction[index] == 'A') {
            
            adence(&value_spaceshipe);
        }

        index += 1;
    }

    string_concatenate(finalie_coordinate, "{x: \0 ", &index_final_sting);
    string_concatenate(finalie_coordinate, int_to_str(value_spaceshipe.x), &index_final_sting);
    string_concatenate(finalie_coordinate, ", y: \0 ", &index_final_sting);
    string_concatenate(finalie_coordinate, int_to_str(value_spaceshipe.y), &index_final_sting);
    string_concatenate(finalie_coordinate, ", direction: '\0", &index_final_sting);
    string_concatenate(finalie_coordinate, value_spaceshipe.direction , &index_final_sting);
    string_concatenate(finalie_coordinate, "'}\0", &index_final_sting);

    return finalie_coordinate;
}

char* my_spaceship(char* instruction){

    cordinate_array value_spaceshipe;

    initialise(&value_spaceshipe);

    char* coordinate = read_(instruction, value_spaceshipe);

    return coordinate;

}

/*int main(void){
    
    my_spaceship("");

    return 0;
}*/