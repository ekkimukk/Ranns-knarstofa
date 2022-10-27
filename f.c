#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float y, x, xn=2, xk=3, dx;
    int i=1, a=10, N;

    printf("x_nach = "); scanf("%f", &xn);
    printf("x_konech = "); scanf("%f", &xk);
    printf("N = "); scanf("%d", &N);

    x = xn;
    dx = (xk-xn)/(N-1);

    printf("Identifier table\n");
    printf("%2s %12s %12s\n", "i", "x", "y");
    printf("----------------------------\n");

    for (i; i<=N; i++)
    {
		y = (log10(fabs(a-x)))/(log10(a+2) + log10(x));
		printf("%2.0d %12.3f %12.3f\n", i+1, x, y);
		x += dx;
	}
	return 0;
}
