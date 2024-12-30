#include <stdio.h>

int main()
{
    int i = 4, j = 4;
    while (i + 1 ? --i : j++)
    {
        printf("%d\n", i);
        return 0;
    }

    // Output: 3
}