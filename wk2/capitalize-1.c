/*similar to capitalize-0 but this one implements two functions:
 toupper()   &   tolower();                                   */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    printf("Please enter a string: ");
    string s = GetString();
    
    if (s != NULL)
    {
        for (/*each letter in string*/ int i = 0, j = strlen(s); i <= j; i++) 
        {
            //if the letter is lowercase...
            if (islower(s[i]))
            {
                //print out the capital version of that letter.   
                printf("%c", toupper(s[i]));
            
            }
            else 
            {
                //print that character as is...
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }


