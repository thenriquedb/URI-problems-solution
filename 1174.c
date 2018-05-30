#include <stdio.h>

int main() {
    int TAM = 5,i;
    float v[TAM];

    for (i = 0; i < TAM; i++) {
        scanf("%f", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (v[i] <= 10) {
            printf("A[%d] = %.1f\n", i, v[i]);
        }
    }
}
