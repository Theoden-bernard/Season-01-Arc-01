# DESCRIPTION

Reproduce the behavior of the function strncpy.

## FUNCTION PROTOTYPE (C)

```c
char* my_strncpy(char* param_1, char* param_2, int param_3)
{

}
```

## Example 00
```bash
Input: "" && "abc" && 2
Output: 
Return Value: "ab"
```
## Example 01
```bash
Input: "" && "RaInB0w d4Sh! " && 6
Output: 
Return Value: "RaInB0"
```
## Example 02
```bash
Input: "" && "Hello World" && 0
Output: 
Return Value: ""
```