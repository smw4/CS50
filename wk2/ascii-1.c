#include <stdio.h>


int main (void)

{
    //don't need to use ints if you increment by char...
    for (char c = 'A'; c <= 'Z'; c++)
    {
    //casting char c to an int using "(int) c" ...
        printf("%i is %c\n", (int) c, c);   
    }
}
