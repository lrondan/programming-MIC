#include <stdio.h>
#include <math.h>

int main() {
    const int x=1;
    const int y=100;
    float solution;
	solution = (exp(x)/log(3))*(log10(x) + log10(y));
    printf("The solution is %f", solution);
    return 0;
}   