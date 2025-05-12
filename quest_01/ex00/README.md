# DESCRIPTION

The last part of coding is compiling, but we will start with this.

What is compilation? It transforms a text file (yes a file of code is a text file) into a binary file.

## How to compile?

```bash
gcc -o my_first_compilation my_first_compilation.c
```

```bash
-o stands for output, it will be the name of the binary we want to create.
xxxx.c -> C file we want to compile
```

Let's dive in.

---

## STEP00

We will use this C file (you can copy paste it). You need to name it: my_first_compilation.c

```c
#include <stdio.h>

int main(int ac, char **av) {
    printf("my_first_compilation.\n");
    return 0;
}
```

---

## STEP01

Run the compilation command:
```bash
gcc -o my_first_compilation my_first_compilation.c
```

---

## STEP02

Execution
```bash
./my_first_compilation
```
It should print my_first_compilation.

(The \n means it will go to a new line.)

## Example 00
```bash
Input: 
Output: my_first_compilation.
```
Return Value: nil
Tip To test if your exercise(s) is/are correct(s), you can execute the command gandalf in your terminal.