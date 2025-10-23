#include <stdio.h> // Includes the standard input and output library

int main()
{
    int temperature; // Declares an integer variable to store the temperature

    // Prompts the user to enter the temperature in degrees Celsius
    printf("Enter the temperature in degrees Celsius: ");
    scanf("%d", &temperature); // Reads the user’s input and stores it in "temperature"

    // Checks the temperature range using the "if" structure
    if (temperature >= 30)   // If the temperature is greater than or equal to 30
    {
        printf("It's hot!\n"); // Prints "It's hot!"
    }
    else if (temperature >= 15 && temperature < 30)     // If the temperature is between 15 and 29
    {
        printf("Mild temperature.\n"); // Prints "Mild temperature."
    }
    else     // If the temperature is less than 15
    {
        printf("It's cold!\n"); // Prints "It's cold!"
    }

    return 0; // Indicates that the program ended successfully
}
