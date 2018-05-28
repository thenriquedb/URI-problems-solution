#include <stdio.h>
#include <math.h>

int main() {
	double pi = 3.14159, r, volume;
	
	scanf("%lf", &r);
	volume = (4.0 * (pi * pow(r,3)))/3.0;
	
	printf("VOLUME = %.3lf\n",volume);
}
