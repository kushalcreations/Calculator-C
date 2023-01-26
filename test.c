#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
// using addition
int subtract(int a, int b)
{
    return add(a, -b);
}

// Function to multiply two numbers
// using addition
int multiply(int a, int b)
{
    int result = 0;
    for (int i = 0; i < b; i++)
        result = add(result, a);
    return result;
}

// Function to divide two numbers
// using addition
int divide(int a, int b)
{
    int result = 0;
    while (a >= b)
    {
        a = subtract(a, b);
        result = add(result, 1);
    }
    return result;
}

int main()
{
    int a = 10, b = 5;

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d / %d = %d\n", a, b, divide(a, b));

    return 0;
}