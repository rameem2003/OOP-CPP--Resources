#include <stdio.h>

int main()
{
    int a = 8, b = 4, c = 2, d = 1, e = 5, f = 20;
    printf("%d\n", a + b - (c + d) * 3 % e + f / 9);
    return 0;

    // Output: 10
}