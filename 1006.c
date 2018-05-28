#include <stdio.h>
 
int main() {
float A,B,C,MEDIA;

do {
	scanf("%f",&A);
} while (A <=0.00 && A>=10.00);
 

do {
	scanf("%f",&B);
} while (B<=0.00 && B>=10.00);

do {
	scanf("%f",&C);
} while (C<=0.00 && C>=10.00);

printf("MEDIA = %.1f\n",MEDIA = ((A*2)+(B*3)+(C*5))/10);
 
    return 0;
}
