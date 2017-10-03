 #include<stdio.h>
 #include<stdlib.h>
int i, j;

int main(void)
{
	char sign = 'X';
	char sign2 = '-';
	int temp, temp2;

	//===================================================
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
	//===================================================
	printf("\n(2) \n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (i == 1) || (i == 2) || (i == 8) || (i == 7) || (j == 0) || (j == 9) || (j == 1) || (j == 2) || (j == 8) || (j == 07))
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
	//===================================================
	temp = 4;
	temp2 = 5;
	printf("\n(3) \n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i<5) && (j==temp))
			{
				printf("%c", sign);
				temp--;
			}
			else if ((i < 5) && (j == temp2))
			{
				printf("%c", sign);
			}
			else if (i==4)
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
	temp = 1;
	temp2 =8;
	//===================================================
	printf("\n(4) \n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i>0) && (i<5) && (j==temp))
			{
				printf("%c", sign);
			
			}
			else if ((i > 0) && (i<5) && (j==temp2))
			{
				temp++;
				printf("%c", sign);
				temp2--;
			}
			else if (i==0)
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
	//===================================================
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



	system("pause");
	return 0;
}
