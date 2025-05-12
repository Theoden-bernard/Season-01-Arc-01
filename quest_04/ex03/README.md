# DESCRIPTION

Count the size of each elements in an array.

Create a function my_count_on_it that receives a string array as a parameter and returns an array with the length of each string.

## FUNCTION PROTOTYPE (C)

```c
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


integer_array* my_count_on_it(string_array* param_1)
{

}
```

## Example 00
```bash
Input: ["This", "is", "the", "way"]
Output: 
Return Value: [4, 2, 3, 3]
```
## Example 01
```bash
Input: ["aBc", "AbcE Fgef1"]
Output: 
Return Value: [3, 10]
```
## Example 02
```bash
Input: ["aBc"]
Output: 
Return Value: [3]
```