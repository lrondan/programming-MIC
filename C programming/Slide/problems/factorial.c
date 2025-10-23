#include <stdio.h>

int main() {
    int n, i, factorial = 1;
    printf("Insert the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is: %d\n", n, factorial);
    return 0;
}   