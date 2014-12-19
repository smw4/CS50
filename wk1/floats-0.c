
/*
    Sean Wilkinson
    Dec. 9, 2014
    This program does division in decimals.
    - changing float values of x and y modifies the output.
*/   

#include <stdio.h>
#include <cs50.h>

int main (void) 
{
    float x = 1.0;
    float y = 10.0;
    float n = (x / y);
    printf("%.1f / %.1f equals %.2f\n", x, y, n);

return 0;
}
