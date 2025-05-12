# DESCRIPTION

Structures in C are similar to the concept of package.

You can have multiple object inside your package and with a struct you can have multiple variable in it.

A struct is a type.

You are defining a struct of type struct s_box which will contains variables.

**example:**
```c
struct s_coordinate {
  int x;
  int y;
}

int main() {
  struct s_coordinate coord;

  coord.x = 0;
  coord.y = 0;
  return 0;
}
```
A struct has a special behavior if it's a pointer on a struct or not.

If it's a pointer on a struct, in order to reach the variable you will use -> example:
```c
struct s_coordinate {
  int x;
  int y;
}

int main() {
  struct s_coordinate coord;
  struct s_coordinate* ptr_on_coord = &coord;

  ptr_on_coord->x = 0;
  ptr_on_coord->y = 0;
  return 0;
}
```
Let's dive in.

In this exercise you will receive a struct integer_array. You have to print its size and its content following this format: size\narray[0]\narray[1]... Iterate throught the variable size to iterate throught the struct.

If the size is 0, just print 0\n.

You can use printf() to print.

## FUNCTION PROTOTYPE (C)

```c
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(integer_array* param_1)
{

}
```

## Example 00
```bash
Input: [0]
Output: 1
0

Return Value: nil
```
## Example 01
```bash
Input: [1, 2, 3]
Output: 3
1
2
3

Return Value: nil
```
## Example 02
```bash
Input: [10, 2, 3, 3, 0, -1]
Output: 6
10
2
3
3
0
-1

Return Value: nil
```