    #include <stdio.h>

    int main() {
    float n1, n2, media, soma=0;

    //Leitura e validação da nota 1
        do {
            scanf("%f",&n1);
                if(n1 < 0 || n1 > 10) {
                    printf("nota invalida\n");
                } else {
                    soma += n1;
                }
        } while(n1 < 0 || n1 > 10);


    //Leitura e validação da nota 2
        do {
            scanf("%f",&n2);
                if(n2 < 0 || n2 > 10) {
                    printf("nota invalida\n");
                } else {
                soma += n2;
                }
        } while(n2 < 0 || n2 > 10);

        printf("media = %.2f\n",media = soma / 2);
    }
