#include <stdio.h>

void convertLength();
void convertWeight();
void convertTemperature();

void convertLength()
{
    int choice;
    double value;

    printf("\n\033[1;36mYou Choose Length Conversion:\033[0m\n\n");
    printf("\033[1;36m1. Meters to Kilometers\033[0m\n");
    printf("\033[1;36m2. Kilometers to Meters\033[0m\n");
    printf("\033[1;36m3. Inches to Centimeters\033[0m\n");
    printf("\033[1;36m4. Centimeters to Inches\033[0m\n");

    printf("\033[1;32mEnter your choice (1-4): \033[0m\t");
    scanf("%d", &choice);
    printf("\033[1;36mEnter the value to convert: \033[0m\t");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        printf("%.2lf meters is %.2lf kilometers\n", value, value / 1000);
        break;
    case 2:
        printf("%.2lf kilometers is %.2lf meters\n", value, value * 1000);
        break;
    case 3:
        printf("%.2lf inches is %.2lf centimeters\n", value, value * 2.54);
        break;
    case 4:
        printf("%.2lf centimeters is %.2lf inches\n", value, value / 2.54);
        break;
    default:
        printf("Invalid choice.\n");
    }
}

void convertWeight()
{
    int choice;
    double value;

    printf("\nWeight Conversion:\n");
    printf("1. Grams to Kilograms\n");
    printf("2. Kilograms to Grams\n");
    printf("3. Pounds to Kilograms\n");
    printf("4. Kilograms to Pounds\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        printf("%.2lf grams is %.2lf kilograms\n", value, value / 1000);
        break;
    case 2:
        printf("%.2lf kilograms is %.2lf grams\n", value, value * 1000);
        break;
    case 3:
        printf("%.2lf pounds is %.2lf kilograms\n", value, value * 0.453592);
        break;
    case 4:
        printf("%.2lf kilograms is %.2lf pounds\n", value, value / 0.453592);
        break;
    default:
        printf("Invalid choice.\n");
    }
}

void convertTemperature()
{
    int choice;
    double value;

    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);
    printf("Enter the temperature to convert: ");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        printf("%.2lf Celsius is %.2lf Fahrenheit\n", value, (value * 9 / 5) + 32);
        break;
    case 2:
        printf("%.2lf Fahrenheit is %.2lf Celsius\n", value, (value - 32) * 5 / 9);
        break;
    default:
        printf("Invalid choice.\n");
    }
}

int runApp()
{
    int choice;

    printf("\033[1;32m####################################################\033[0m\n");
    printf("\033[1;32m#               Unit Conversion Tool               #\033[0m\n");
    printf("\033[1;32m#            Software Version 0.1 Alpha            #\033[0m\n");
    printf("\033[1;32m#               Software written in C              #\033[0m\n");
    printf("\033[1;32m####################################################\033[0m\n\n\n");

    printf("---------------------\n");
    printf("1. Length Conversion\n");
    printf("2. Weight Conversion\n");
    printf("3. Temperature Conversion\n");
    printf("4. Exit\n\n\n");

    printf("\033[1;32mEnter your choice (1-4): \033[0m\t");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        convertLength();
        runApp();
        break;
    case 2:
        convertWeight();
        runApp();
        break;
    case 3:
        convertTemperature();
        runApp();
        break;
    case 4:
        printf("\033[1;31mApp is closing.......\033[0m\n");
        printf("\033[1;31mThank you so much\033[0m\n\n");
        return 0;
    default:
        printf("\033[1;31m####################################################\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m#####    Invalid choice. Please try again.     #####\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m####################################################\033[0m\n\n\n");
    }
}

int main()
{
    runApp();
}