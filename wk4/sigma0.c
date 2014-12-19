// A program that asks for a positive integer
// It then figures out what is the sum of all the numbers from 1 to n.
// Then prints them to screen.

#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main (int argc, char *argv[])

{
    int input;
    do
    {
        printf("Please enter a positive integer: ");
        input = GetInt();
    } while (input < 1);
    
    // sanity check!
    printf("Good job!\n");
    printf("You entered %i\n", input);    

    // Now the tricky part....
    // Pseudocode --> 
    int sum = 0;
    
    // DO SOMETHING
    // for every number leading up to input, add it to the previous count.
    for (int i = 0; i <= input; i++) 
    {
        // Increment sum...... ( sum += i )
        sum += i;
    }
    // End of tricky part....
    
    // print the sum.
    printf("The sum of all numbers from 1 to %i is %i\n", input, sum);   

}
