
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
