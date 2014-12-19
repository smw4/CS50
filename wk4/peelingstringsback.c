/*no more strings
  now char *
  now using strcmp(s, t) to compare contents of input.
  */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, char *argv[])
{

    printf("Say something: ");
    char* s = GetString();
    
    printf("Say something: ");
    char* t = GetString();
    
    if (s != NULL && t != NULL)
    {
        /*strcmp() compares s & t. This function returns 0 when they are the same. 
        That's why if strcmp(s,t) == 0, they are the same. */
        if (strcmp(s, t) == 0)
        {
            printf("Same!\n");
        }
        
        else
        {
            printf("Different!\n");
        }
    }
}
