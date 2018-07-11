#include <stdio.h>
#define pi 3.14159

int main() {
    float a,b,c;
    double triang, circulo, trapezio, quadrado , retang;

    scanf("%f %f %f",&a, &b, &c);

        printf("TRIANGULO: %.3f\n",triang = (a*c) / 2);
        printf("CIRCULO: %.3f\n", circulo = pi * (c*c));
        printf("TRAPEZIO: %.3f\n", trapezio = ((a +b) * c)/2);
        printf("QUADRADO: %.3f\n", quadrado = b*b);
        printf("RETANGULO: %.3f\n", retang = a*b);
}
