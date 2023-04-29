#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, m, i, j, k;
	float x, y, e_upper, e_lower;
	
	printf("x = "); scanf("%f", &x);
	printf("m = "); scanf("%d", &m);
	printf("n = "); scanf("%d", &n);
	
	for (i=2; i<=n; i++){
	y = 0;
	
	e_upper = 0;
	for (k=1; k<=m; k++){
		e_upper = e_upper + pow(k, 3);
	}
	
	e_lower = 0;
	for (j=1; j<=m; j++){
		e_lower = e_lower + pow(i+j, 1/2);
	}
	
	y = y + ( (pow(x,3) + pow(e_upper,2)) / (x + e_lower) );
	
	}
	
	printf("%f", y);
	
	return 0;
}

