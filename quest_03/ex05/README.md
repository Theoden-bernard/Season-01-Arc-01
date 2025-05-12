# DESCRIPTION

Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string. Returns a pointer pointing to the last matching character, or null if no match was found.

## FUNCTION PROTOTYPE (C)

```c
char* my_strrchr(char* param_1, char param_2)
{

}
```

## Example 00
```bash
Input: "abcabc" && "b"
Output: 
Return Value: "bc"
```

## Example 01
```bash
Input: "121212" && "2"
Output: 
Return Value: "2"
```
## Example 02
```bash
Input: "abc" && "d"
Output: 
Return Value: nil
```