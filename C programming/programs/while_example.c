#include <stdio.h> // Includes the standard input and output library

int main()
{
    int number; // Declares an integer variable to store the user's input

    // Starts a loop that will keep running until the user enters a positive number
    while (1)   // Infinite loop; will break only when a positive number is entered
    {
        // Prompts the user to enter a positive number
        printf("Enter a positive number: ");
        scanf("%d", &number); // Reads the user’s input and stores it in "number"

        if (number > 0)   // Checks if the number is positive
        {
            printf("Thank you! You entered a positive number.\n"); // Prints confirmation message
            break; // Exits the loop
        }
        else     // If the number is not positive
        {
            printf("That is not a positive number. Please try again.\n"); // Prints error message
        }
    }

    return 0; // Indicates that the program ended successfully
}
