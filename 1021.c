#include <stdio.h>

int main () {
float n;
float resto, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;

scan("%f", &n);

do {
	n100 = n / 100;
	resto = n - n100;

	printf("%.0f nota(s) de R$ 100.00\n",n100);
	
	
} while( resto != 0);

	
}
