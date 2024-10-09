/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

char string[3][15] = 
{
    "bananas","apples","oranges"
};

int count (char *str, char target)
{
    int counter = 0;
    char *ptr = str;
    
    for (int i = 0; i < 45; i++)
    {
        if (*(ptr+i) == target)
            counter++;
    }
    
    return counter;
}




int main()
{
    char target = 'a';
    int times = count(&string[0][0],target);
    printf("%d",times);

    return 0;
}
