#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    printf("Please enter a phrase for me to copy & capitalize: ");
    char* phrase = GetString();
    
    //safety precaution
    if (phrase == NULL)
        return 1;
    
    printf("Copying...");
    GetString();
    
    char* capsPhrase = malloc((strlen(phrase) + 1) * sizeof(char));
    
    //safety precaution
    if (capsPhrase == NULL)
        {
            free(phrase);
            return 1;
        }
    
    //Printing Copies...
    if (strlen(phrase) > 0)
    {
        for (int i = 0, n = strlen(phrase); i <= n; i++)
        {
            capsPhrase[i] = phrase[i];
            capsPhrase[i] = toupper(capsPhrase[i]);
        } 
    }
     
    printf("%s\n", capsPhrase);
    
    free(phrase);
    free(capsPhrase);
    
    return 0;
}
