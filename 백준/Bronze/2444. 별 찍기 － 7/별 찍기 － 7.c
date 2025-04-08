#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);

	int i, j, k;

	for (i = 0; i < N - 1; i++)
	{
		for (j = N - 1-i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 0; 2 * (i+1) - 1 > k; k++)
		{
			printf("*");
		}
		printf("\n");
	}


	for (i = 0; i < N; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; 2 * (N - i) - 1 > k; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}