#include <stdio.h>

int main() {
int x,i,cont=0;

scanf("%d",&x);
i = x+1;
do {
	if(i % 2 != 0) {
		printf("%d\n",i);
		cont++;
	}
	i++;		
  }while (cont != 6);
}
