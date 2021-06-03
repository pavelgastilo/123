// 2.2(6) pavel gastilo

#pragma hdrstop
#include <tchar.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

int _tmain()
{
	int v,c,fact;
	int n = 1;
	double O,E,x,S;
	double Q = 0;
	printf("vvedite E:\n E=");
	scanf("%lf", &E);
	printf("vvedite x:\n x=");
	scanf("%lf", &x);
	O = sin(x);
	while (fabs(O - Q) > E)
	{
		fact = 1;
		v = 2 * n - 1;
		for (int k = 1; k <= v; k++)
		{
			fact = fact * k;
			c = fact;
		}
		Q=Q+pow(-1, n - 1) * pow(x, v ) / c;
		printf("\n%lf",Q);
		printf("\n%lf",O);

		n++;
	}
	printf("n = %d",n);
	printf("\n");
	getch();
	return 0;
}
