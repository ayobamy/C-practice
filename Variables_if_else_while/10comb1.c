#include <stdio.h>

int main(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        putchar(i + 0);
        
        if (i != 57) 
        {
            putchar(44);
            putchar(32);
        }
        
    }
    putchar(10);

    return 0;
}