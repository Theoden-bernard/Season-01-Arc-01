# DESCRIPTION

Create a function that combines an array of strings from separator characters.

["Hello", "World", "!"] && ' '
=> "Hello World !"
You will receive two parameters, an array with all the strings and a separator.

The function should return a string where all the strings from the array are joined with the separator.

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


char* my_join(string_array* param_1, char* param_2)
{

}
```

## Example 00
```bash
Input: ["abc", "def", "gh", "!"] && "-"
Output: 
Return Value: "abc-def-gh-!"
```
## Example 01
```bash
Input: ["abc", "def", "gh", "!"] && "blah"
Output: 
Return Value: "abcblahdefblahghblah!"
```
## Example 02
```bash
Input: ["abc", "def", "gh", "!"] && ""
Output: 
Return Value: "abcdefgh!"
```
## Example 03
```bash
Input: [] && " "
Output: 
Return Value: nil
```