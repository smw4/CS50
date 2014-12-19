/* Sean W
    12/9/14
    Prints out the name of the program and the subsequent 
    strings entered thereafter, each on a separate line.*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{   
        for (int i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }

}
