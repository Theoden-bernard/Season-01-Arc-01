# DESCRIPTION

Let's create a function which will tell us if an array is sorted or not. What is sorted? :-)

Write a function that takes an integer array as a parameter (input) and returns a boolean (true/false).

Your function should return true if the integer array is sorted in either ASC(ascending) or description(descending) order. Your function should return false if the integer array is not sorted.

Numbers will be from -2_000_000 to 2_000_000 The array might have duplicates.

## FUNCTION PROTOTYPE (C)

```c
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{

}
```
## Example 00
```bash
Input: [1, 1, 2]
Output: 
Return Value: true
```
## Example 01
```bash
Input: [2, 1, -1]
Output: 
Return Value: true
```
## Example 02
```bash
Input: [4, 7, 0, 3]
Output: 
Return Value: false
```
## Example 03
```bash
Input: []
Output: 
Return Value: true
```