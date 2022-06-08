#include <stdio.h>

int main(void)
{
    int i = 97;
    int j = 65;
    
    while (j < 91)
    {
        while (i < 123)
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