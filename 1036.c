#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, delta, R1, R2, raiz;
    
    scanf("%lf %lf %lf",&a, &b, &c);
    delta = (b*b) - (4*a*c);
    
    R1 = (-b + sqrt(delta)) / (2*a);
    R2 = (-b - sqrt(delta)) / (2*a);
    
    if (a != 0 && sqrt(delta) > 0) {
    	printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    } else {
    	printf("Impossivel calcular\n");	
    }
}
