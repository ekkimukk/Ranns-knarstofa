#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int count){
	int v; v=1;
	for (int i=1;i<=count;i++){
		v=v*i;
	}
	return v;
}


int main()
{
	float x, y, e;
	int n, i, signum;
	
	printf("x = ");
	scanf("%f", &x);
	printf("n = ");
	scanf("%d", &n);
	
	e = 0;
	signum = 1;
	for (i=1; i<=n; i++)
	{
		e = e + (pow(-1, i) * (pow(x, i) * pow(log(x), i))/factorial(i));
	}
	
	y = pow(x, 1/2) + x * e;
	
	printf("%f", y);
	
	return 0;
}

