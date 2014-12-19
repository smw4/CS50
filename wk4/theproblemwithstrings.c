/*
SMW
12.9.14
Compares strings taken from user. Determines if different or the same. */


//Program demonstrates a nuance of pointers...
 
#include <cs50.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    
    printf("Say something: ");
    string s = GetString();
       
    printf("Say something: ");
    string t = GetString();
    
    //this line will ALWAYS yield else. Because of pointers to two necessarily\
    distinct places in memory where the 'strings' reside...
    if (s == t)
    {
        printf("Same thing!\n");
    }
    else
    {
        printf("Those are different strings.\n");
    }
}
