#include<stdio.h>
#include<stdlib.h>
int Han_Xin_5()
{
	char sign = 'X';
	char sign2 = '-';
	int temp, temp2;
	int i, j;
	temp = 9;
	printf("\n(5) \n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", sign);
			}
			else if (j == temp)
			{
				printf("%c", sign);
				temp--;
			}
			else
			{
				printf("%c", sign2);
			}

		}
		printf("\n");
	}
}