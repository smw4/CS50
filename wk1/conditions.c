#include <stdio.h>
#include <cs50.h>

int main (void) 
{

    printf("Please enter an integer: ");
    int n = GetInt();

    if (n > 0) 
    {
        printf("You entered a positive number!\n");
    }
    else if (n == 0) 
    {
        printf("You entered zero!\n");
    }
    else
    {
        printf("You entered a negative number!\n");
    }

return 0;
}
