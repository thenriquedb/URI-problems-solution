
#include <stdio.h>

  int main() {
    int n[3], n_copy[3], i, j, aux;

    for (i = 0; i < 3; i++) {
      scanf("%d", & n[i]);
      n_copy[i] = n[i];
    }

    for (i = 0; i < 3; i++) {
      for (j = i + 1; j < 3; j++) {
        if (n[i] > n[j]) {
          aux = n[i];
          n[i] = n[j];
          n[j] = aux;
        }
      }
    }

    for (i = 0; i < 3; i++) {
      printf("%d\n", n[i]);
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
      printf("%d\n", n_copy[i]);
    }
  }
