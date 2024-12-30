#include <stdio.h>
int main()
{
    int x = 3, y = 5, z = 1;

    printf("%d\n", z += x > y ? 10 : 20);
    return 0;

    // Output: 21
}