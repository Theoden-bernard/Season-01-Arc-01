# DESCRIPTION

Let's switch the contents of parameter A and parameter B.

Create a function that swaps the value of two integers whose addresses are entered as parameters.

## FUNCTION PROTOTYPE (C)

```c
void my_swap(int* param_1, int* param_2)
{

}
```

# Example 00 (In C)
```c
int main() {
  int variable_a = 12;
  int variable_b = 21;

  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 12 ** B - 21
  my_swap(&variable_a, &variable_b);
  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 21 ** B - 12
  return 0;
}
```