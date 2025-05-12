# DESCRIPTION

Create a function that displays a string of characters on the standard output. The address of the string's first character is in the pointer entered as parameter in the function.

## FUNCTION PROTOTYPE (C)

```c
void my_putstr(char* param_1)
{

}
```

## Example 00
```bash
Input: "abc"
Output: abc
Return Value: nil
```
## Example 01
```bash
Input: "abcdelele dzp ll 0"
Output: abcdelele dzp ll 0
Return Value: nil
```
## Example 02
```bash
Input: ""
Output: 
Return Value: nil
```

Tips (In C) Remember \0 is the End Of String (In C) To print a character you can use my_putchar
```c
int my_putchar(char c) {
  return write(1, &c, 1);
}
```