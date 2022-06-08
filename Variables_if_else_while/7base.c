#include <stdio.h>

int main(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        putchar(i + 0);
    }
    putchar(10);

    return 0;
}