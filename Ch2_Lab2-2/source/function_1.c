#include<stdio.h>
#include<stdlib.h>
int Han_Xin_1()
{
	char sign = 'X';
	char sign2 = '-';
	int temp, temp2;
	int i, j;

	printf("\n(1) \n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", sign);
			}
			else
			{

				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}