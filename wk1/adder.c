#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Give me an integer: ");
    int i = GetInt();
    printf("Give me another integer: ");
    int j = GetInt();

    printf("  %i\n+ %i\n --------\n  %i\n", i, j, i + j);
    
return 0;
}
