#pragma hdrstop
#include <tchar.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>
using namespace std;

int _tmain()
{
	/*
	int j = 0;
	FILE *text;
	text = fopen("text.txt", "r");
	char String[40][20], list[40];
	while (!feof(text))
	{
		fscanf(text, "%s", String[j]);
		j++;
	}
	puts(String);
	*/
	int n,k;
	cout << "Vvedite kol-vo slov(cherez probel):";
	cin >> n;
	string S[100];
	string s[n];
	string Zapis[n];
	for (int i=0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int i=0; i < n; i++)
	{
		cout << s[i] <<" ";
	}
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		Zapis[i] = s[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (k = i + 1; k < n; k++)
		{
			if (s[i] == s[k] )
			{
				Zapis[i] = "-";
				Zapis[k] = "-";

			}
		}
	}
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (Zapis[i] != "-")
		{
			S[d] = Zapis[i];
			d++;
		}
	}
	for (int i = 0; i < d + 1; i++)
	{
		cout << S[i] << " ";
	}
	cout << "\n";
	string Str[50];
	int a;
	int v = 0;
	for (int i = 0; i < d + 1; i++)
	{
		a = 0;
		string f = S[i].substr(0,1);
		if (f == "a" || f == "A")
		{
			a = 1;
		}
		if (f == "b" || f == "B")
		{
			a = 2;
		}
		if (f == "c" || f == "C")
		{
			a = 3;
		}
		if (f == "d" || f == "D")
		{
			a = 4;
		}
		if (f == "e" || f == "E")
		{
			a = 5;
		}
		if (f == "f" || f == "F")
		{
			a = 6;
		}
		if (f == "g" || f == "G")
		{
			a = 7;
		}
		if (f == "h" || f == "H")
		{
			a = 8;
		}
		if (f == "i" || f == "I" )
		{
			a = 9;
		}
		if (f == "j" || f == "J")
		{
			a = 10;
		}
		if (f == "k" || f == "K")
		{
			a = 11;
		}
		if (f == "l" || f == "L")
		{
			a = 12;
		}
		if (f == "m" || f == "M")
		{
			a = 13;
		}
		if (f == "n" || f == "N" )
		{
			a = 14;
		}
		if (f == "o" || f == "O")
		{
			a = 15;
		}
		if (f == "p" || f == "P")
		{
		   a = 16;
		}
		if (f == "q" || f == "Q")
		{
			a = 17;
		}
		if (f == "r" || f == "R")
		{
			a = 18;
		}
		if (f == "s" || f == "S")
		{
		   a = 19;
		}
		if (f == "t" || f == "T")
		{
			a = 20;
		}
		if (f == "u" || f == "U")
		{
			a = 21;
		}
		if (f == "v" || f == "V")
		{
		   a = 22;
		}
		if (f == "w" || f == "W")
		{
		   a = 23;
		}
		if (f == "x" || f == "X")
		{
		  a = 24;
		}
		if (f == "y" || f == "Y")
		{
			a = 25;
		}
		if (f == "z" || f == "Z")
		{
			a = 26;
		}
		Str[a] = S[i];

	}
	cout << "\n";
	for (int i = 0; i < 27; i++)
	{
	   cout << Str[i] << " ";
	}
	getch();
	return 0;
}
