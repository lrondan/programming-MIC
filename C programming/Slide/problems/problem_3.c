#include <stdio.h>

/*
A chemist wishes to calculate the total molar mass (g/mol)
of an organic substance composed solely of the elements Carbon (C),
Hydrogen (H), Oxygen (O), and Nitrogen (N).
Create a C program that asks the user for the number of atoms of each
element in the molecule and then calculates the total molar mass using
the known atomic masses.

*/

int main() {
    // Atomic weights (g/mol)
    const float C = 12.01;
    const float H = 1.008;
    const float O = 16.00;
    const float N = 14.01;

    int nC, nH, nO, nN;  // Number of atoms
    float molarMass;
    char again;

    printf("=== Molar Mass Calculator for Organic Compounds ===\n");
    printf("Elements considered: Carbon (C), Hydrogen (H), Oxygen (O), Nitrogen (N)\n\n");

    do {
        // Input number of atoms for each element
        printf("Enter the number of Carbon atoms (C): ");
        scanf("%d", &nC);
        printf("Enter the number of Hydrogen atoms (H): ");
        scanf("%d", &nH);
        printf("Enter the number of Oxygen atoms (O): ");
        scanf("%d", &nO);
        printf("Enter the number of Nitrogen atoms (N): ");
        scanf("%d", &nN);

        // Calculate molar mass
        molarMass = (nC * C) + (nH * H) + (nO * O) + (nN * N);

        // Display the result
        printf("\nThe molar mass of the compound is: %.3f g/mol\n\n", molarMass);

        // Ask if the user wants to calculate again
        printf("Do you want to calculate another compound? (y/n): ");
        scanf(" %c", &again);  // space before %c avoids input issues

        printf("\n");

    } while (again == 'y' || again == 'Y');

    printf("Program finished. Goodbye!\n");
    return 0;
}
