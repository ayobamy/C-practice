#include <stdio.h>

int main(void)
{
    int i = 122;

    while (i >= 97)
    {
        putchar (i + 0);
        i--;
    }

    putchar('\n');

    return 0;
}