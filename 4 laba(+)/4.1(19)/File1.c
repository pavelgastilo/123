 //4.1(19)
#pragma hdrstop
#pragma argsused
#include <stdio.h>
#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif

	int my_strlen(char c_str[])
	{
		int count = 0;
		for (count; c_str[count] != '\0'; count++) {}
		return count;
	}

	int _tmain(int argc, _TCHAR* argv[])
	{
		int N;
		printf("Vvedite n:\n");
		scanf("%d",&N);
		char words[256][9];
		for (int i = 0; i < N; i++)
		{
			printf("Vvedite %d slovo: ", i + 1);
			rewind(stdin);
			for (int k = 0; k < 9; k++)
			{
				scanf("%c", &words[i][k]);
				if (words[i][k] == '\n')
				{
					words[i][k] = '\0';
					break;
				}
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int r = my_strlen(words[i]) - 1;
				if (words[j][0] == words[i][r])
				{
					char temp[9];
					for (int k = 0; k < 9; k++)
					{
						temp[k] = words[i + 1][k];
					}
					for (int k = 0; k < 9; k++)
					{
						words[i + 1][k] = words[j][k];
					}
					for (int k = 0; k < 9; k++)
					{
						words[j][k] = temp[k];
					}
					break;
				}
				else if (words[j][0] != words[i][r] && i + 1 >= N)
				{
					printf("Cepochky nelzya sostavit\n");
					getch();
					return 0;
				}
			}
		}
		for (int i = 1; i <= N; i++)
		{
			for (int k = 0; words[i][k] != '\0'; k++)
			{
				printf("%c", words[i][k]);
			}
			printf(" ");
		}
		getch();
		return 0;
	}
