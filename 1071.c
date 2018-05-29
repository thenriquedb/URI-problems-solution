#include <stdio.h>

int main() {
    int x, y, i, soma = 0;

    scanf("%d %d", &x, &y);

    if (x > y) {
    	// Como a soma será dos números entre X e Y, bastar somar 1 ao menor valor para ele não ser incluido na soma
        for (i = y+1; i < x; i++) { 
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
    } else {
        for (i = x+1; i < y; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
    }

    printf("%d\n", soma);
}
