#include <stdio.h>
#include <math.h>

int main () {
<<<<<<< HEAD
	float x1, y1, x2, y2,r, s1, s2, s1_quad, s2_quad;
		
	scanf("%f %f",&x1, &y1);
	scanf("%f %f",&x2, &y2);
	
	s1 = x2-x1;
	s1_quad = pow(s1,2);
	
	s2 = y2-y1;
	s2_quad = pow(s2,2);
	
	r = sqrt(s1_quad + s2_quad);
	
	printf("%.4f\n",r);
=======
float x1, y1, x2, y2,r, s1, s2, s1_quad, s2_quad;
	
scanf("%f %f",&x1, &y1);
scanf("%f %f",&x2, &y2);

s1 = x2-x1;
s1_quad = pow(s1,2);

s2 = y2-y1;
s2_quad = pow(s2,2);

r = sqrt(s1_quad + s2_quad);

printf("%.4f\n",r);
>>>>>>> 30346d00ab5ca258bec8fa1194d6f2d8ce4115fe
}
