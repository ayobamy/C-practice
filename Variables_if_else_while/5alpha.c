#include <stdio.h>

int main(void)
{
    int i = 97;
    
    while (i < 123)
    {
        if (i != 'q' && i != 'e')
        putchar (i + 0);
        i++;
        
    }
    
    putchar('\n');
    
    return 0;
}