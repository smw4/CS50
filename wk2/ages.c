/*This program determines how many people it's dealing with.
  Then it asks how old each of them is.
  Then time passes.
  Then it says how old each of them has become.             */

#include <cs50.h>
#include <stdio.h>

int main(void) 
{

    int n;
    
    do
    {
        printf("Number of people in room: ");
        n = GetInt();
    }
    while (n < 1);
    
    //initializes an array with unknown number of indices. 
    int ages[n];
    
    //for each of the people in the room...
    for (int i = 0; i < n; i++)
    {
        //ask what is their age... 
        printf("What is the age of person #%i: ", i + 1);           /* i+1 so doesn't start counting at 0*/
        ages[i] = GetInt(); //and store it...
    }
    printf("Time passes...\n");

    //for each of the people in the room...
    for (int i = 0; i < n; i++)
    {
        //print how old they were and how old they are now...
        printf("the %i year old is now %i\n", ages[i], ages[i] + 1);
    }
}
