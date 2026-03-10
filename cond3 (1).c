#include <stdio.h>
#include <cs50.h>

int max3(int a, int b, int c);

int main()
{
    int a = get_int("Enter a: ");
    int b = get_int("Enter b: ");
    int c = get_int("Enter c: ");

    printf("Maximum = %d\n", max3(a,b,c));
}

int max3(int a, int b, int c)
{
    int max = a;

    if(b > max)
        max = b;

    if(c > max)
        max = c;

    return max;
}
