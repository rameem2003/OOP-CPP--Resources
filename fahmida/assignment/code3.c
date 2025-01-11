/**
 * 1^3+3^3+5^3+......+(2n - 1)^3 = n^2(2n^2 - 1)
 */

#include <stdio.h>

int main()
{
    int n, i = 1;
    long long sum = 0, formula_result;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of cubes of odd numbers using a do-while loop
    do
    {
        int odd = 2 * i - 1;               // Generate the i-th odd number
        sum += (long long)odd * odd * odd; // Add its cube to the sum
        i++;
    } while (i <= n);

    // Calculate the sum using the formula
    formula_result = (long long)n * n * (2 * n * n - 1);

    // Display the results
    printf("Sum of cubes of first %d odd numbers (using loop): %lld\n", n, sum);
    printf("Sum of cubes of first %d odd numbers (using formula): %lld\n", n, formula_result);

    // Verify if the iterative result matches the formula
    if (sum == formula_result)
    {
        printf("Verified: 1^3 + 3^3 + 5^3 + ... + (2n - 1)^3 = n^2(2n^2 - 1)\n");
    }
    else
    {
        printf("Verification failed.\n");
    }

    return 0;
}
