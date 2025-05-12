# DESCRIPTION

Create a function that takes a pointer to integer as a parameter, and sets the value to 0.

## FUNCTION PROTOTYPE (C)

```c
void my_initializer(int* param_1)
{

}
```

## Example 00 (In C)
```c
int main() {
  int variable_a = 12;

  printf("%d\n", variable_a); // will print 12
  my_initializer(&variable_a);
  printf("%d\n", variable_a); // will print 0
  return 0;
}
```