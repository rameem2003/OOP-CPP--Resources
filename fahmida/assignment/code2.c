/**
 * 1^2+2^2+3^3+.....+n^2={n(n+1)(2n+1)}/6
 */

#include <stdio.h>

int main()
{
    int n;
    long long sum = 0, formula_result;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using iteration
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    // Calculate the sum using the formula
    formula_result = (long long)n * (n + 1) * (2 * n + 1) / 6;

    // Display the results
    printf("Sum of squares (using loop): %lld\n", sum);
    printf("Sum of squares (using formula): %lld\n", formula_result);

    // Verify if the iterative result matches the formula
    if (sum == formula_result)
    {
        printf("Verified: 1^2 + 2^2 + ... + n^2 = n(n+1)(2n+1)/6\n");
    }
    else
    {
        printf("Verification failed.\n");
    }

    return 0;
}
