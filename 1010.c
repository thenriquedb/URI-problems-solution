#include <stdio.h>
 
int main() {
int cod1, n1, cod2, n2;
float preco1, preco2,total;

scanf("%d %d %f",&cod1, &n1, &preco1);
scanf("%d %d %f",&cod2, &n2, &preco2);

printf("VALOR A PAGAR: R$ %.2f\n",total=(n1*preco1)+(n2*preco2));

}
