#include <stdio.h>

/*
A scientific laboratory needs a program that allows temperatures recorded in Kelvin (K)
to be converted to Fahrenheit (°F), so that the results can be understood by technicians
 who use the imperial system.
Write a C program that prompts the user for a temperature in Kelvin, performs the conversion,
 and displays the result in Fahrenheit to two decimal places. Requirements

The program must:
Prompt the user for a temperature in Kelvin.
Calculate the equivalent temperature in Fahrenheit.
Display the result on the screen with two decimal places.
Include comments that explain each step of the code.
Verify that the entered Kelvin value is greater than or equal to 0 (there are no negative temperatures in Kelvin).

*/
int main(){
	float K, F;
	printf("Insert the value of temperature in K : ");
	scanf("%f",&K);
	
	if (K < 0){
		printf("Invalid input [there are no negative temperatures in Kelvin]");
	}
	else if (K == 0){
		printf("Absolute 0 K not exist");
	}
	else{
		printf("The temperature in F is : %f", F = (9/5)*(K - 273.15)+ 32);
	}
	
	return 0;
}