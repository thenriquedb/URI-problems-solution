#include <stdio.h>

int main() {
    int i, n, m, soma = 0;

    do {
        scanf("%d %d", &n, &m);
        ;
        soma = 0;

        if (n <= 0 || m <= 0) {
            break;
        }

        if (n > m) {
            for (i = m; i <= n; i++) {
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        } else {
            for (i = n; i <= m; i++) {
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        }
    } while ((n > 0 && n != 0) && (m > 0 && m != 0));
}
