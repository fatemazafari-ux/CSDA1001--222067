#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_even(int n);

int main()
{
    int n = get_int("Enter number: ");

    if(is_even(n))
        printf("Even\n");
    else
        printf("Odd\n");
}

bool is_even(int n)
{
    if(n % 2 == 0)
        return true;
    else
        return false;
}
