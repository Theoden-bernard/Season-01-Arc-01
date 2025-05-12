# DESCRIPTION

["Hello", "World", "."]

Create a function that displays the content of an array of strings. One word per line.

Each word will be followed by a newline, including the last one.

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


void my_print_words_array(string_array* param_1)
{

}
```

## Example 00
```bash
Input: ["abc", "def", "gh"]
Output: abc
def
gh

Return Value: nil
```
## Example 01
```bash
Input: ["123"]
Output: 123

Return Value: nil
```
## Example 02
```bash
Input: ["", "", "hello"]
Output: 

hello

Return Value: nil
```