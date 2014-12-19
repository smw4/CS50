#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[])
{

    printf("Say something: ");
    char* s = GetString();
    if (s == NULL)
    {
        return 1;
    }
    
    char* t = s;
    
    printf("Capitalizing copy...\n");
    GetString();
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("Original: %s\n", s);
    printf("Copy:     %s\n", t);
}

// after all this, only the first letter of the inputed word is capitalized on output. Something else is needed...
