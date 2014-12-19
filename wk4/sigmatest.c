// A program that asks for a positive integer
// It then figures out what is the sum of all the numbers from 1 to n.
// Then prints them to screen.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int sigma(int m);
int main (int argc, char *argv[])

{
    int input;
    do
    {
        printf("Please enter a positive integer: ");
        input = GetInt();
    } 
    while (input < 1);

    
    int answer = sigma(input);
    
    // print result of sigma.
    printf("The sum of all numbers from 1 to %i is %i\n", input, answer);
}

int sigma(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else 
    {
        return m + sigma(m - 1);
    }
      
}
