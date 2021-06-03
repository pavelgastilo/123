// laba 1 C 1.2(5)

#pragma hdrstop
#include <tchar.h>
#include <math.h>
#include <conio.h>

int _tmain(){
	int m;
	int d = 0;
	printf("Max chislo\n m=");
	scanf("%d",&m);
	if (m < 9)
	{
		printf("Chisla ne imeut desyatichnoi zapisi");
	}
	for (int i = 10; i < m + 1; i++)
	{
		if (i / 10 < 10)
		{
		  int d = i / 10;
		  int f = i - 10 * d;
		  if (d != f)
		  {
			printf("%d",i);
			printf("\n");
		  }

		}
		if (i / 10 < 100)
		{
			int d = i / 10;
			int c = i - d * 10;
			int a = d / 10;
			int b = d - a * 10;
			if (c > b && b > a)
			{
				printf("%d",i);
				printf("\n");
			}
			if (a > b &&  b > c)
			{
               	printf("%d",i);
				printf("\n");
			}

		}
	}
	getch();
	return 0;
}


