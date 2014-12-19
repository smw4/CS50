#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char* s = GetString();
    if (s == NULL)
    {return 1;}
    
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        // *(s + i) is effectively the address of the i'th character of s.
        printf("%c\n", *(s + i));
    }   
    


}
