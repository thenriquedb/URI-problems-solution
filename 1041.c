#include <stdio.h>

int main() {
	float x,y;
	
	scanf("%f %f",&x, &y);
	
	//X e Y positivo
	if(x > 0 && y > 0) {
		printf("Q1\n");
	}
	
	//X negativo e Y positivo
	else if (x < 0 && y > 0) {
		printf("Q2\n");
	}
	
	//X e Y negativo
	else if (x < 0 && y < 0) {
		printf("Q3\n");
	}
	
	//X positivo e Y negativo
	else if (x > 0 && y < 0) {
		printf("Q4\n");
	}
	
	//X e Y = 0
	else if (x == 0 && y == 0) {
		printf("Origem\n");
	}
	
	//X = 0
	else if (x == 0 && y != 0) {
		printf("Eixo Y\n");
	}
	
	//Y = 0
	else if (x != 0 && y == 0) {
		printf("Eixo X\n");
	}
	
	}
	
