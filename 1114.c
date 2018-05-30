#include <stdio.h>

int main() {
int s;

do {
	scanf("%d",&s);
	
	if(s != 2002) {
		printf("Senha Invalida\n");
	} else {
		printf("Acesso Permitido\n");
	}
} while (s != 2002);
	
}
