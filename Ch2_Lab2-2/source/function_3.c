#include<stdio.h>
#include<stdlib.h>
int Han_Xin_3()
{
	char sign = 'X';
	char sign2 = '-';
	int temp, temp2;
	int i, j;
	//===================================================
	temp = 4;
	temp2 = 5;
	printf("\n(3) \n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i<5) && (j == temp))
			{
				printf("%c", sign);
				temp--;
			}
			else if ((i < 5) && (j == temp2))
			{
				printf("%c", sign);
			}
			else if (i == 4)
			{

				printf("%c", sign);
			}
			else
			{

				printf("%c", sign2);
			}
		}
		temp2++;
		printf("\n");
	}
	
}