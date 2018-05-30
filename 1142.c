
#include <stdio.h>

int main() {
int n, i, j, a = 1;

scanf("%d", & n);

    for (i = 0; i < n; i++) { 
      for (j = 1; j <= 3; j++) { 
        printf("%d ", a);
        a++;
        if (j == 3) {
          printf("PUM\n");
        }
      }
      a++;
    }
  }
