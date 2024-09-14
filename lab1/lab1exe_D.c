#include <math.h>
#include <stdio.h>

int main(){
	double angle;
	printf("Please enter an angle in radians: ");
	scanf("%lf", &angle);
	printf("The sine of %f using in-buit trigonometric functions is: %f.\n", angle, sin(angle));
	double my_own_sin;
	my_own_sin = angle - ((pow(angle, (double) 3) )/ ( 3 * 2 * 1)) + ((pow(angle, (double) 5) ) / ( 5 * 4 * 3 * 2 * 1)) - ((pow(angle, (double) 7) )/ ( 7 * 6 * 5 * 4 * 3 * 2 * 1));
	printf("The sine of %f using in-buit Taylor series approximation is: %f.\n", angle, my_own_sin);
	return 0;
}
