#include <stdio.h>
#include <math.h>

int main(){
	
	const int z = 12;
	double f;
	for (int i=1; i<=5 ;i++){
		f = pow((z + 1)/i, 0.5);
		printf("the value of f(x): %lf  to p = %d \n", f, i);
	}
	return 0;
	}