#include <stdio.h>
#include <math.h>

/*
A physics student is analyzing the motion of an object launched vertically upward
 from the ground with a certain initial velocity. He wants to know the maximum height
  the object will reach before it begins to fall again.
Write a C program that asks for the initial velocity (m/s), calculates the maximum height (m)
 and displays the result on the screen.

The program must:
Prompt the user for the initial velocity (m/s).
Calculate the maximum height ℎ (m)
Display the result on the screen with two decimal places.
Use a constant for gravity: const float g = 9.81;
Verify that the initial velocity is greater than or equal to 0.
Include explanatory comments for the code.

*/

int main() {
    const float g = 9.81; // start gravity constant  (m/s²)
    float v, h;           // velocity and heigh
    int option;           // user choice
    char contin;         // to control the loop

    do {
        // Mostrar el menú principal
        printf("Choice an option:\n");
        printf("1. Calculate the maximum heigh \n");
        printf("2. Calculate the speed \n");
        printf("Option: ");
        scanf("%d", &option);

        if (option == 1) {
            // h
            printf("\nV (m/s): ");
            scanf("%f", &v);

            if (v < 0) {
                printf("The velocity is < 0.\n\n");
            } else {
                h = (v * v) / (2 * g);
                printf("h = %.2f metros\n\n", h);
            }

        } else if (option == 2) {
            // v
            printf("\The heigh (m): ");
            scanf("%f", &h);

            if (h < 0) {
                printf("The h is < 0.\n\n");
            } else {
                v = sqrt(2 * g * h);
                printf("v = %.2f m/s\n\n", v);
            }

        } else {
            printf("Invalid option. Please, Select 1 or 2.\n\n");
        }

        // ask
        printf("¿Do you want to continue? (y/n): ");
        scanf(" %c", &contin);

        printf("\n");

    } while (contin == 'y' || contin == 'Y');

    printf("The end!\n");
    return 0;
}
