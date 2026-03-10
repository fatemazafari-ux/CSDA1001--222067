#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_leap(int year);

int main()
{
    int year = get_int("Enter year: ");

    if(is_leap(year))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
}

bool is_leap(int year)
{
    if(year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else
        return false;
}
