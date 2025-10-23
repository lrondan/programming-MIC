#include <stdio.h>
#include <math.h>

int main() {
    double P, r, A, I;   // Principal, rate, final amount, interest
    int n;                // Times compounded per year
    int t;                // Number of years (integer for loop)
    char again;

    printf("=== Compound Interest Year-by-Year Calculator ===\n\n");

    do {
        // Input principal
        printf("Enter the initial amount (principal): ");
        scanf("%lf", &P);

        // Input rate with validation (max 200%)
        do {
            printf("Enter the annual interest rate (%%): ");
            scanf("%lf", &r);
            if (r > 200) {
                printf("Error: Interest rate cannot exceed 200%%. Please enter a valid rate.\n");
            }
        } while (r > 200);

        // Input compounding and years
        printf("Enter the number of times compounded per year: ");
        scanf("%d", &n);
        printf("Enter the number of years: ");
        scanf("%d", &t);

        // Convert percentage to decimal
        r = r / 100;

        printf("\n--- Yearly Growth ---\n");

        // Loop through each year
        for (int year = 1; year <= t; year++) {
            A = P * pow((1 + r / n), n * year);
            I = A - P;
            printf("Year %d: Final balance = $%.2f | Interest earned = $%.2f\n", year, A, I);
        }

        // Show summary after last year
        printf("\nAfter %d years:\n", t);
        printf("Total balance: $%.2f\n", A);
        printf("Total interest earned: $%.2f\n", I);

        // Ask if user wants to calculate again
        printf("\nDo you want to calculate another investment? (y/n): ");
        scanf(" %c", &again);
        printf("\n");

    } while (again == 'y' || again == 'Y');

    printf("Program finished. Goodbye!\n");
    return 0;
}
