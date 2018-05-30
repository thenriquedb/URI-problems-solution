
#include <stdio.h>

  int main() {
    int x, i = 1, j, cont = 0, soma = 0;

    do {
      scanf("%d", & x);
      soma = 0;
      cont = 0;

      if (x == 0) {
        break;
      }

      //Even number
      else if (x % 2 == 0) {
        i = x;
        do {
          if (i % 2 == 0) {
            soma = soma + i;
            cont++;
          }
          i++;
        } while (cont < 5);
        printf("%d\n", soma);
      }

      //Odd numbers
      else {
        i = x + 1;
        do {
          if (i % 2 == 0) {
            soma = soma + i;
            cont++;
          }
          i++;
        } while (cont < 5);
        printf("%d\n", soma);
      }
    } while (x != 0);
  }
