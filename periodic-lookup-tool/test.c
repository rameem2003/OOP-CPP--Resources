#include <stdio.h>
#include <string.h>

#define ELEMENTS 5 // You can increase this to add more elements

// Structure to store information about an element
struct Element
{
    int atomic_number;
    char symbol[3];
    char name[20];
    float atomic_weight;
};

// Function to search element by atomic number
void searchByAtomicNumber(struct Element elements[], int atomic_number)
{
    for (int i = 0; i < ELEMENTS; i++)
    {
        if (elements[i].atomic_number == atomic_number)
        {
            printf("Element found: %s (%s) - Atomic Weight: %.2f\n",
                   elements[i].name, elements[i].symbol, elements[i].atomic_weight);
            return;
        }
    }
    printf("Element not found with atomic number %d.\n", atomic_number);
}

// Function to search element by symbol
void searchBySymbol(struct Element elements[], char symbol[])
{
    for (int i = 0; i < ELEMENTS; i++)
    {
        if (strcmp(elements[i].symbol, symbol) == 0)
        {
            printf("Element found: %s (%s) - Atomic Weight: %.2f\n",
                   elements[i].name, elements[i].symbol, elements[i].atomic_weight);
            return;
        }
    }
    printf("Element not found with symbol %s.\n", symbol);
}

int main()
{
    struct Element elements[ELEMENTS] = {
        {1, "H", "Hydrogen", 1.008},
        {2, "He", "Helium", 4.0026},
        {3, "Li", "Lithium", 6.94},
        {4, "Be", "Beryllium", 9.0122},
        {5, "B", "Boron", 10.81}
        // Add more elements as needed
    };

    int choice, atomic_number;
    char symbol[3];

    printf("Periodic Table Lookup Tool\n");
    printf("1. Search by Atomic Number\n");
    printf("2. Search by Symbol\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Atomic Number: ");
        scanf("%d", &atomic_number);
        searchByAtomicNumber(elements, atomic_number);
        break;
    case 2:
        printf("Enter Symbol: ");
        scanf("%s", symbol);
        searchBySymbol(elements, symbol);
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
