#pragma hdrstop
#pragma argsused
#include <iostream>
#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <conio.h>
#include <stdio.h>
using namespace std;

class node
{
	public:
	int number;
	node* next;
	node* pred;
};

class list
{
	public:
	node* first;
	node* last;
    void empty ()
	{
		first = NULL;
	}
	bool check ()
	{
		return(first == NULL);
	}
	void Add(int num)
	{
		if (check)
		{
			first -> number = num;
			last = first;
		}
		else
		{
			node *c = new node();
			c -> number = num;
			c -> next = NULL;
			c -> pred = last;
			last -> next = c;
			last = c;
		}
	}
	void pokaz()
	{
		node *c = first;
		while(c -> next != NULL)
		{
			cout << c -> number;
			cout << "\n";
		}
		delete c;
	}


};

int _tmain(int argc, _TCHAR* argv[])
{
	list a;
	list A;
	list AD;
	list ad;
	list J;
	list sym;
	long SL = 0;
	long sl = 0;
	long b;
	long c;
	long d;
	long j;
	a.empty();
	A.empty();
	AD.empty();
	ad.empty();
	J.empty();
	sym.empty();
	for (int i = 0; i <= 19936 ; i++)
	{
		b = pow(2,i);
		a.Add(b);                        //(a)spisok chisla 2 v stepeni 19936
	}
	for (int i = 0; i <= 19936; i++)
	{
		SL = SL + i;                 //(A)spisok pervoi symmi svex delitelei 2  v stepeni 19936
		A.Add(SL);                    //Poisk deliteley pervogo mnozhitelya
	}
	c = pow(a.last -> number,2);  //poslednee chislo spiska a(2 v stepeni 19936) v stepeni 2
	AD.Add(c);                    //(AD) spisok chisla 2 v stepeni 19937
	d = AD.first -> number - 1;   // poslednee chislo spisla(2 v stepeni 19937) - 1
	ad.Add(d);           		  //(ad) spisok chisla 2 v stepeni 19937 - 1
	j = ((a.last -> number) * (ad.last -> number));
	J.Add(j);            		  //(J) vse chislo v spiske
	for (int i = 0; i <= d; i++)  //poisk deliteley vtorogo mnozhitelya
	{
		if (d % i == 0)
		{
			sl = sl + i;            //poisk delitelet vtorogo mnozhitelya
			sym.Add(sl);            //(sym)spisok vtoroi symmi vsem deliteley vtorogo mnozhitelya
		}
	}
	if ((J.last -> number) == ((A.last -> number) + (sym.last -> number)))
	{
		cout << "Chislo yavlyaetsya sovershennim";
	}
	if ((J.last -> number) != ((A.last -> number) + (sym.last -> number)))
	{
		cout << "Chislo ne yavlyaetsya sovershennim";
	}
	getch();
	return 0;
}

