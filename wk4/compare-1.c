#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, char *argv[])

{
    //get two strings
    printf("Give me a string: ");
    char* s = GetString();     
    
    printf("Give me a second string: ");
    char* t = GetString();

    if (s != NULL && t != NULL)
    {
        //if s and t are the same strings...
        if (strcmp(s, t) == 0)
           printf("These are the same strings!\n");
        else
            printf("These are not the same strings!\n");         
    }    
}
