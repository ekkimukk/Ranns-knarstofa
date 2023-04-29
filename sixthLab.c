#include <stdio.h>
#include <stdlib.h>
#include <math.h>	

int main()
{
	int i, m;
	float y, a, c, e_upper, e_lower_left, e_lower_right;
	
	printf("a = "); scanf("%f", &a);
	printf("m = "); scanf("%d", &m);
	printf("c = "); scanf("%f", &c);
	
	e_upper = 0;
	for (i=2; i<=m; i++){
		e_upper += (3*pow(i, 2) + 2*i + c);
	}
	
	e_lower_left = 0;
	for (i=1; i<=m; i++){
		e_lower_left += (pow(i, 2) + 2);
	}
	
	e_lower_right = 0;
	for (i=2; i<=m; i++){
		e_lower_right += (i + 3);
	}
	
	y =  (6 + a*e_upper)/(4 + e_lower_left + pow(e_lower_right, 0.5));
	
	printf("%f", y);
	
	return 0;
}

