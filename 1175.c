#include <stdio.h>

int main() {
	int v[20],i,j,aux[20];
	j=20;
	
	for(i=0; i<20; i++) {
		scanf("%d",&v[i]);
	}
	
	for(i=0; i<20; i++) {
		aux[i] = v[j-1];
		j--;
		printf("N[%d] = %d\n",i,aux[i]);
	}
}
