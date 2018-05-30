#include <stdio.h>

int main() {
int v[10],i,n;

scanf("%d", &n);
v[0] = n;

for(i=0; i<10; i++) {
	printf("N[%d] = %d\n",i,v[i]);
	v[i+1] = v[i]*2;
}


}
