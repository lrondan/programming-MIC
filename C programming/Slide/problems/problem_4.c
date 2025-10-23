#include <stdio.h>

int main() {
    const float g_earth   = 1.00;
    const float g_mercury = 0.38;
    const float g_venus   = 0.91;
    const float g_mars    = 0.38;
    const float g_jupiter = 2.53;
    const float g_saturn  = 1.06;
    const float g_uranus  = 0.92;
    const float g_neptune = 1.20;

    float weight_earth, weight_planet;
    int option;
    char again;

    printf("=== Weight on Planets Calculator ===\n\n");

    do {
        // Ask the user for their Earth weight
        printf("Enter your weight on Earth (kg): ");
        scanf("%f", &weight_earth);

        // Display the planet selection menu
        printf("\nSelect a planet:\n");
        printf("1. Mercury\n");
        printf("2. Venus\n");
        printf("3. Earth\n");
        printf("4. Mars\n");
        printf("5. Jupiter\n");
        printf("6. Saturn\n");
        printf("7. Uranus\n");
        printf("8. Neptune\n");
        printf("Option: ");
        scanf("%d", &option);

        // Calculate weight based on selected planet
        switch (option) {
            case 1:
                weight_planet = weight_earth * g_mercury;
                printf("\nYour weight on Mercury is: %.2f kg\n", weight_planet);
                break;
            case 2:
                weight_planet = weight_earth * g_venus;
                printf("\nYour weight on Venus is: %.2f kg\n", weight_planet);
                break;
            case 3:
                printf("\nYour weight on Earth is: %.2f kg\n", weight_earth);
                break;
            case 4:
                weight_planet = weight_earth * g_mars ;
                printf("\nYour weight on Mars is: %.2f kg\n", weight_planet);
                break;
            case 5:
                weight_planet = weight_earth * g_jupiter;
                printf("\nYour weight on Jupiter is: %.2f kg\n", weight_planet);
                break;
            case 6:
                weight_planet = weight_earth * g_saturn;
                printf("\nYour weight on Saturn is: %.2f kg\n", weight_planet);
                break;
            case 7:
                weight_planet = weight_earth * g_uranus;
                printf("\nYour weight on Uranus is: %.2f kg\n", weight_planet);
                break;
            case 8:
                weight_planet = weight_earth * g_neptune;
                printf("\nYour weight on Neptune is: %.2f kg\n", weight_planet);
                break;

            default:
                printf("\nInvalid option. Please choose between 1 and 8.\n");
                break;
        }

        // Ask if the user wants to repeat
        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &again);

        printf("\n");

    } while (again == 'y' || again == 'Y');

    printf("Program finished. Goodbye!\n");
    return 0;
}
