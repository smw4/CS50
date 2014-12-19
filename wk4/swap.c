// asks for two integers from the user
// stores them as x and y
// calls swap()
// swa makes x = y and y = x
// int (main) prints out the new values for x and y.

#include <stdio.h>

int swap(int *x, int *y);
int main (int argc, char *argv[])
{
    int a = 5;
    int b = 10;
    
    printf("a is %i and b is %i\n", a, b);
        
    swap(&a, &b);
    printf("a is %i and b is %i\n", a, b);
    
    /*sanity test... 
    printf("%i\n", x);
    printf("%i\n", y);
    printf("Looks good?");
    */

}

int swap(int *x, int *y)
{

    int tmp = *x;
    *x = *y;
    *y = tmp; 

    return 0;
}
