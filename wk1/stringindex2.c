/*
    A faster version of string index...
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void) 
{
    string s = GetString();
    
    if (s != NULL)
    {
    
        /* This for-loop is faster because it only measures i against strlen(s) once
        and then saves strlen(s) as a variable, which it compares itself against for
        the remaining loops...*/
        for (int i = 0, j = strlen(s); i < j; i++) 
        {
            printf("%c\n", s[i]);
        }
    }




return 0;
}
