#include <stdio.h> // Includes the standard input and output library
#include <math.h> //Includes the standard math library

int main()
{
    // Prints the header for the output
    printf("Number\tSquare\tCubic\n"); // Table header for numbers and their squares
    printf("---------------------\n"); // Divider line for better readability

    // Uses a for loop to calculate and display the squares of the first 10 natural numbers
    for (int i = 1; i <= 10; i++)   // Loop from 1 to 10
    {
        int square = i * i; // Calculates the square of the current number
        int cubic = pow(i,3);
        printf("%d\t%d\t%d\n", i, square, cubic); // Prints the number and its square
    }

    return 0; // Indicates that the program ended successfully
}
