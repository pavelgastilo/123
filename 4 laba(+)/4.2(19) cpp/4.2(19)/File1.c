#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
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
	getch();
	return 0;
}
