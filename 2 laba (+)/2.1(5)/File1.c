// 2.1(5) pavel gastilo
// eVegetable

#pragma hdrstop
#include <tchar.h>
#include <math.h>
#include <conio.h>


int kar (int a, int b)
{
	a = b * 500;
	return a;
}

int mor (int c, int d)
{
   c = d * 1000;
   return  c;
}

int svek (int e, int f)
{
  e = f * 700;
  return e;
}

int _tmain()
{
	int n;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	int F = 0;
	int L = 0;
	Renter:
	system("cls");
	printf("1.Zakaz kartofelya \n");
	printf("2.Zakaz morkovi \n");
	printf("3.Zakaz svekli \n");
	printf("4.Korzina \n");
	printf("5.Raschet stoimosti zakaza \n");
	printf("6.Feedback \n");
	printf("7.Vihod \n");
	scanf("%d",&n);
	if (n < 1)
	{
		printf("net takoi funkcii, vvedite sootvetstvyushee chislo\n");
		getch();
		goto Renter;
	}
	if (n > 7)
	{
		printf("net takoi funkcii, vvedite sootvetstvyushee chislo\n");
		getch();
		goto Renter;
	}
	if (n == 1)
	{
		printf("Vvedite kol-vo kg kartofelya\n");
		Renter2:
		scanf("%d",&B);
		if (B < 1)
		{
			printf("Vvedite korrektnoe kol-vo kg\n");
			goto Renter2;
		}
		if (B > 99)
		{
			printf("Na sklade stolko kg otsytstvyet, poprobyite menshe\n");
			goto Renter2;
		}
		A = kar (A,B);
		printf("Vi yspeshno zakazali %d",B);
		printf(" kg kartofelya");
		printf(" na symmy %d",A);
		printf("\n\n");
		printf("Chto-nibyd eshe ?\n\n");
		getch();
		goto Renter;
	}
	if (n == 2)
	{
		printf("Vvedite kol-vo kg morkovi\n");
		Renter3:
		scanf("%d",&D);
		if (D < 1)
		{
			printf("Vvedite korrektnoe kol-vo kg\n");
			goto Renter3;
		}
		if (D > 43)
		{
			printf("Na sklade stolko kg otsytstvyet, poprobyite menshe\n");
			goto Renter3;
		}
		C = mor (C,D);
		printf("Vi yspeshno zakazali %d",D);
		printf(" kg morkovi");
		printf(" na symmy %d",C);
		printf("\n\n");
		printf("Chto-nibyd eshe ?\n\n");
		getch();
		goto Renter;
	}
	if (n == 3)
	{
		printf("Vvedite kol-vo kg svekli\n");
		Renter4:
		scanf("%d",&F);
		if (F < 1)
		{
			printf("Vvedite korrektnoe kol-vo kg\n");
			goto Renter4;
		}
		if (F > 50)
		{
			printf("Na sklade stolko kg otsytstvyet, poprobyite menshe\n");
			goto Renter4;
		}
		E = svek (E,F);
		printf("Vi yspeshno zakazali %d",F);
		printf(" kg svekli");
		printf(" na symmy %d",E);
		printf("\n\n");
		printf("Chto-nibyd eshe ?\n\n");
		getch();
		goto Renter;
	}

	if (n == 4)
	{
		int K = B + D + F;
		L = A + C + E + 15000;
		printf("Vi zakazali %d",K);
		printf(" kg Ovoshei");
		printf("\n\n");
		printf("na symmy(s vostavkoi) %d",L);
		printf("\n");
		printf("Chto-nibyd eshe ?\n\n");
		getch();
		goto Renter;
	}

	if (n == 5)
	{
		printf("Vi zakazali:\n");
		printf("%d",B);
		printf(" kg kartofelya na symmy ");
		printf("%d", A);
		printf("\n");
		printf("%d",D);
		printf(" kg morkovi na symmy ");
		printf("%d", C);
		printf("\n");
		printf("%d",F);
		printf(" kg svekli na symmy ");
		printf("%d", E);
		printf("\n");
		printf("Potratili na dostavky: 15000");
		printf("\n");
		printf("Obshaya symma zakaza sostavlyaet: ");
		printf("%d", L);
		getch();
		goto Renter;
	}

	if (n == 6)
	{
		printf("Nazvanie: eVegetables\n");
		printf("God sozdaniya: 2003\n");
		printf("Licenziya n1999032\n");
		printf("Kontaktniy telefon: +375297269763\n");
		printf("Email: pavel.gastilo@mail.ru\n\n");
		printf("Sdelaite zakaz\n");
		getch();
		goto Renter;
	}
	if (n == 7)
	{
		return 0;
	}
}
