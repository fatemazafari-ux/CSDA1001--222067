#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main()
{
    int n = get_int("Enter number: ");
    printf("Factorial = %d\n", factorial(n));
}

int factorial(int n)
{
    int fact = 1;

    for(int i=1;i<=n;i++)
        fact = fact * i;

    return fact;
}
