#include <cs50.h>
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
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                //print out the capital version of that letter.   
                printf ("%c", s[i] - ('a' - 'A'));
                                                    /*print f prints the character represented by
                                                    the string's current index MINUS the difference 
                                                    between lowercase and uppercase 'A'
                                                    .... could also have replace ('a' - 'A') with 32 */
            
            }
            else 
                //print that character as is...
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }


