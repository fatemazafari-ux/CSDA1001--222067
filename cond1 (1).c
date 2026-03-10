#include <stdio.h>
#include <cs50.h>

int sign(int n);

int main()
{
    int n = get_int("Enter number: ");

    int result = sign(n);

    if(result == 1)
        printf("Positive\n");
    else if(result == -1)
        printf("Negative\n");
    else
        printf("Zero\n");
}

int sign(int n)
{
    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    else
        return 0;
}
