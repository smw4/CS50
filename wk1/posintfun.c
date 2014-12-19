// Sean Wilkinson
// Dec. 9, 2014

/* The program requests a positive int from the user. If it finds\
   one, it prints out a thank you and the number.Else, it re-prompts\
   for a positive int.                                             */

#include <stdio.h>
#include <cs50.h>

int PositiveInt(void);

int main (void)
{
    int x = PositiveInt();
    printf("Thanks for the %i!\n", x);
       
};

int PositiveInt(void) 
{
    int n;
    do 
    {
        printf("Positive integer, please: ");
        n = GetInt();
    }
    while (n <= 0);    
    
    return n;
};
