#include <stdio.h> // Includes the standard input and output library

int main()
{
    int age; // Declares an integer variable to store the age

    // Prompts the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age); // Reads the user’s input and stores it in "age"

    // Checks the age range using only "if else"
    if (age <= 12)   // If age is 12 or less
    {
        printf("You are a child.\n"); // Prints "You are a child."
    }
    else     // If age is greater than 12
    {
        if (age <= 19)   // Checks if age is between 13 and 19
        {
            printf("You are a teenager.\n"); // Prints "You are a teenager."
        }
        else     // If age is greater than 19
        {
            if (age <= 64)   // Checks if age is between 20 and 64
            {
                printf("You are an adult.\n"); // Prints "You are an adult."
            }
            else     // If age is 65 or more
            {
                printf("You are a senior.\n"); // Prints "You are a senior."
            }
        }
    }

    return 0; // Indicates that the program ended successfully
}

