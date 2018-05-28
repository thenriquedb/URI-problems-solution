#include <stdio.h>
 
int main() {
float A,B,MEDIA;

do {
	scanf("%f",&A);
} while (A <=0.00 && A>=10.00);
 

do {
	scanf("%f",&B);
} while (B<=0.00 && B>=10.00);

printf("MEDIA = %.5f\n",MEDIA = ((A*3.5)+(B*7.5))/11);
 
    return 0;
}
