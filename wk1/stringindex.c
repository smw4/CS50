/*
    Program takes a string and outputs the string (one char per line).
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
//await string as input from user....
    string s = GetString();
    
//if s == NULL, don't run any more code.
    if (s != NULL) 
    {
//traversing the length of the string's array...
        for (int i = 0; i < strlen(s); i++) 
        {
//print the character at the string's current index on a new line...        
            printf("%c\n", s[i]);      
        }
    };
    
    
    
return 0;
}
