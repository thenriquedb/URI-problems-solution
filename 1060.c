#include <stdio.h>

int main() {
    int i,cont=0;
    float n;

    for(i=0;i<6;i++) {
        scanf("%f",&n);

        if(n > 0) {
            cont++;
        }
    }

    printf("%d valores positivos\n",cont);

    }
