#include <stdio.h>

int main(void)
{
	// Quiz1
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	// Quiz2
	for (int i = 5; i >= 1; i--)
	{
		for (int j = i; j <= 5; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	// Quiz3
	for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= 5; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	// Quiz4
	for (int i = 1; i<=5; i++)
	{
		for (int j = 1; j <= 5-i; j++)
		{
			printf(" ");
		}
		for (int j = 5; j > 5 - i; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	// 여기까지
	return 0;
}
