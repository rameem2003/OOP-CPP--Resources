#include <stdio.h>
#include <string.h>

#define TOTAL_ELEMENTS 118

// Structure to store element information
struct Element
{
    int atomic_number;
    char symbol[3];
    char name[20];
    float atomic_weight;
    char electron_config[50]; // Added for electronic configuration
};

// Array of all 118 elements with electronic configurations
struct Element elements[TOTAL_ELEMENTS] = {
    {1, "H", "Hydrogen", 1.008, "1s1"},
    {2, "He", "Helium", 4.0026, "1s2"},
    {3, "Li", "Lithium", 6.94, "1s2 2s1"},
    {4, "Be", "Beryllium", 9.0122, "1s2 2s2"},
    {5, "B", "Boron", 10.81, "1s2 2s2 2p1"},
    {6, "C", "Carbon", 12.011, "1s2 2s2 2p2"},
    {7, "N", "Nitrogen", 14.007, "1s2 2s2 2p3"},
    {8, "O", "Oxygen", 15.999, "1s2 2s2 2p4"},
    {9, "F", "Fluorine", 18.998, "1s2 2s2 2p5"},
    {10, "Ne", "Neon", 20.180, "1s2 2s2 2p6"},
    {11, "Na", "Sodium", 22.990, "1s2 2s2 2p6 3s1"},
    {12, "Mg", "Magnesium", 24.305, "1s2 2s2 2p6 3s2"},
    {13, "Al", "Aluminium", 26.982, "1s2 2s2 2p6 3s2 3p1"},
    {14, "Si", "Silicon", 28.085, "1s2 2s2 2p6 3s2 3p2"},
    {15, "P", "Phosphorus", 30.974, "1s2 2s2 2p6 3s2 3p3"},
    {16, "S", "Sulfur", 32.06, "1s2 2s2 2p6 3s2 3p4"},
    {17, "Cl", "Chlorine", 35.45, "1s2 2s2 2p6 3s2 3p5"},
    {18, "Ar", "Argon", 39.948, "1s2 2s2 2p6 3s2 3p6"},
    {19, "K", "Potassium", 39.098, "1s2 2s2 2p6 3s2 3p6 4s1"},
    {20, "Ca", "Calcium", 40.078, "1s2 2s2 2p6 3s2 3p6 4s2"},
    // ... Add configurations for remaining elements up to 118
};

// Function to display element details
void displayElement(struct Element element)
{
    printf("Element: %s (%s)\n", element.name, element.symbol);
    printf("Atomic Number: %d\n", element.atomic_number);
    printf("Atomic Weight: %.4f\n", element.atomic_weight);
    printf("Electron Configuration: %s\n", element.electron_config);
}

// Example function to search by atomic number
void searchByAtomicNumber(int atomic_number)
{
    if (atomic_number > 0 && atomic_number <= TOTAL_ELEMENTS)
    {
        displayElement(elements[atomic_number - 1]);
    }
    else
    {
        printf("Element with atomic number %d not found.\n", atomic_number);
    }
}

int main()
{
    int atomic_number;

    printf("Enter atomic number to look up an element: ");
    scanf("%d", &atomic_number);

    searchByAtomicNumber(atomic_number);

    return 0;
}
