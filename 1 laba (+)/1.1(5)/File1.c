// laba 1 C 1.1(5)

#pragma hdrstop
#include <tchar.h>
#include <math.h>
#include <conio.h>

int _tmain()
{
	int n,m,d; //n - visota, m - shirina, N-kol-vo kvadratov, d-prom perem
	int N = 0;
	printf("vvedite visoty:\n n=");
	scanf("%d",&n);
	printf("vvedite shiriny:\n m=");
	scanf("%d",&m);
	if (m == n) //proverka ravnosti storon
	{
		printf("storoni ravnie, eto kvadrat a ne pryamoygolnik");
	}
	if (m > n)
	{
		while (n != m)
			{
				N += 1;
				m = m - n;
				if (m < n)
				{
				  d = m;
				  m = n;
				  n = d;
				}
			}
		printf("Kol-vo virezanix kvadratov N=%d",N);
	}
	if (n > m)
	{
		while (n != m)
			{
				N += 1;
				n = n - m;
				if (n < m)
				{
				 d = n;
				 n = m;
				 m = d;
				}
			}
		printf("Kol-vo virezanix kvadratov N=%d",N);
	}
  getch();
  return 0;
}
