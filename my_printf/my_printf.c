/*
**
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
/*
**
*/
#include "printf.h"

/*
**
*/

int intlen(int my_integer)
{
    int index = 0;

    if (my_integer < 0)
    {
        index += 1;
    }
    while (my_integer != 0)
    {
        my_integer = my_integer / 10;
        index += 1;
    }
    return index;
}

int my_strlen(char* string)
{
    int index = 0;

    while (string[index] != 0)
    {
        index += 1;
    }

    return index;
}

int my_strcpy(char* src)
{
    if (src == NULL) {
        write(1, "(null)", 6);
        return 6;
    }
    int index = 0;
    int len = 0;
    char* dest = malloc(sizeof(char) * my_strlen(src));

    while (src[index] != 0)
    {
        dest[index] = src[index];
        len += 1;
        index += 1;
    }
    write(1, dest, my_strlen(dest));
    free(dest);
    return len;
}

int write_intro(const char* caracere, int* index)
{

    int len = *index;

    if (caracere[*index] != '%')
    {
        write(1, &caracere[*index], 1);
        *index += 1;
        return (*index - len);
    }
    else
    {
        *index += 2;
    }
    return 0;
}

char* my_strcpy_for_convertiseur(char* src)
{
    int index = 0;
    int size = my_strlen(src);
    char* dest = malloc(sizeof(char) * size);

    while (src[index] != '\0')
    {
        dest[size - 1] = src[index];
        size -= 1;
        index += 1;
    }
    return dest;
    free(dest);
}

int convertiseur_of_base(char* base, long int num_integer)
{
    int num_base = my_strlen(base);
    int size = intlen(num_integer);
    int len = 0;
    char* string_num = malloc(sizeof(char) * size);
    size = 0;
    while (num_integer != '\0')
    {
        string_num[size] = base[num_integer % num_base];
        num_integer = (num_integer - (num_integer % num_base));
        num_integer = num_integer / num_base;
        len += 1;
        size += 1;
    }
    
    string_num = my_strcpy_for_convertiseur(string_num);
    write(1, string_num, my_strlen(string_num));
    free(string_num);
    return len;
}

int hex_to_str(va_list* list)
{
    int num = va_arg(*list, int);
    int len = 0;
    char base_16[] = "0123456789ABCDEF";
    len += convertiseur_of_base(base_16, num);
    return len;
}

int decimal_to_str(va_list* list)
{ 
    int len = 0;
    int num = va_arg(*list, int);
    char base_10[] = "0123456789";
    if (num < 0) {
        write(1, "-", 1);
        len = 1 +  convertiseur_of_base(base_10, num * -1);
    } else if (num == 0) {
        len += write(1, "0", 1);
    }
    else {
        len = convertiseur_of_base(base_10, num);
    }
    return len;
}

int print_hoctal(va_list* list)
{
    int len = 0;
    int num = va_arg(*list, int);
    char base_8[] = "01234567";
    len = convertiseur_of_base(base_8, num);
    return len;
}

int pointeur_to_str(va_list* list)
{
    int len = 0;
    uintptr_t num = (uintptr_t)va_arg(*list, void*);
    char base_16[] = "0123456789abcdef";
    write(1, "0x", 2);
    len = 2 + convertiseur_of_base(base_16, num);
    return len;
}

int print_char(va_list *list){
    int len = 1;
    char my_charactere[1];
    my_charactere[0] = va_arg(*list, int);
    write(1, my_charactere,1);
    return len;
}

int print_string(va_list *list){
    int len = 0;
    len = my_strcpy(va_arg(*list, char*));
    return len;
}

int unsigned_int(va_list *list) {
    
    int len = 0;
    unsigned int num = va_arg(*list, int);
    char base_10[] = "0123456789";
    len = convertiseur_of_base(base_10, num);
    return len;
}

int my_printf(const char* caractere, ...)
{
    int index = 0;
    int index_write_intro = 0;
    int len = 0;
    va_list list;
    
    va_start(list, caractere);

    t_commutator commutator[] = {
        {COMMUTATOR_SIGNED_INTEGER, decimal_to_str},
        {COMMUTATOR_SIGNED_HEXA, hex_to_str},
        {COMMUTATOR_SIGNED_CHAR, print_char},
        {COMMUTATOR_SIGNED_STR, print_string},
        {COMMUTATOR_UNSIGNED_INT, unsigned_int},
        {COMMUTATOR_SIGNED_HOCTAL, print_hoctal},
        {COMMUTATOR_SIGNED_POINTEUR, pointeur_to_str},
        {0, 0}
    };

    while (caractere[index] != '\0')
    {
        len += write_intro(caractere, &index_write_intro);
        if (caractere[index] == '%')
        {
            index += 1;
            t_commutator *tmp_commutator = commutator;

            while (tmp_commutator->commutator != 0) {
                if (tmp_commutator->commutator == caractere[index]) {
                    len += tmp_commutator->func(&list);
                }
                tmp_commutator += 1;
            }
        }
        index += 1;
    }

    va_end(list);
    return len;
}