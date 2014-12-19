// SMW 12.10.14
// Attempting to copy two strings...
// *Added an argument vector on line 15 to have program talk to you. 
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[])
{
    printf("Say something: ");
    char* myString = GetString();
    if (myString == NULL)
    {
        return 1;
    }
    
    char* capsString = malloc((strlen(myString) + 1) * sizeof(char));
    if (capsString == NULL)
    {
        free(myString);
        return 1;
    }
    //for-loop to print out caps string. 
    for(int i = 0, n = strlen(myString); i <= n; i ++)
    {
        capsString[i] = myString[i];      
        if (strlen(capsString) > 0)
        {
            capsString[i] = toupper(capsString[i]);
            printf("%c", capsString[i]);
        } else {return 1;}
        
    }
    printf("\n");
    
      
    
return 0;
}

