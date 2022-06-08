#include <stdio.h>

int main(void)
{
    int i = 48;
    int j = 97;
    
    while (j < 103)
    {
        while (i < 58)
        {
            putchar (i + 0);
            i++;
        }
        
        putchar (j + 0);
        j++;
        
    }
    
    putchar('\n');
    
    return 0;
}