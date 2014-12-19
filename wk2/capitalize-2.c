/*eliminating the if/else statement from the previous example with function toupper()
*/
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
            printf("%c", toupper(s[i]));
        }
        printf("\n");
    }

}
