#include <math.h>
#include <stdio.h>

int main(){
	double a, b, c, e, alpha, beta;
	/*string x;*/
	printf("Please input the value of a: ");
	scanf("%lf", &a);
	printf("Please input the value of b: ");
	scanf("%lf", &b);
	printf("Please input the value of c: ");
	scanf("%lf", &c);
	e = pow(b, (double) 2) - (4 * a * c);
	alpha = ( -b / (2 * a ));
	beta = sqrt(fabs(e))/ (2 * a );
	if ( e < 0 ) {
		printf(" %f+%fi and %f-%fi.\n", alpha, beta, alpha, beta);
	} else {
		printf(" %f+%f and %f-%f.\n", alpha, beta, alpha, beta);
	}
	return 0;
}
