/**
 * 1+3+5+.....+(2n-1)=n^2
 */

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers using a for loop
    for (int i = 1; i <= n; i++)
    {
        sum += 2 * i - 1; // Add the i-th odd number
    }

    // Display the results
    printf("Sum of first %d odd numbers: %d\n", n, sum);
    printf("n^2: %d\n", n * n);

    // Verify if the summation matches n^2
    if (sum == n * n)
    {
        printf("Verified: 1 + 3 + 5 + ... + (2n-1) = n^2\n");
    }
    else
    {
        printf("Verification failed.\n");
    }

    return 0;
}
