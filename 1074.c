#include <stdio.h> 

int main () {
int i, n, x;
	
scanf("%d",&n);
for(i=0; i<n; i++) {
	scanf("%d",&x);	
		
	if(x % 2 == 0 && x != 0) {
		printf("EVEN ");
	} else if (x % 2 != 0 && x !=0) {
		printf("ODD ");
	} else {
		printf("NULL\n");
	}
	
	if(x > 0 && x != 0) {
		printf("POSITIVE\n");
	} else if (x<0 && x != 0) {
		printf("NEGATIVE\n");
	}

	}
}
