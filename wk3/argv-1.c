/* SMW 12-9-14
    This program demonstrates a loop inside a loop.
    The purpose is to iterate through argv[] indices.
    Then to iterate by character through those strings. */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) 
{
    /*print out each character of each command line argument.
      each on its own line. */
    
    //print out each array...
    for (int i = 0; i < argc; i++)
    {
        //print out each character therein...
        for (int j = 0; j < strlen(argv[i]); j++)
        {
            printf("%c\n", argv[i][j]);
        }
    }
}
