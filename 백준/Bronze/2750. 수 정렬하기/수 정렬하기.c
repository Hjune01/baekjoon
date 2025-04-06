#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);

	int i, j, temp;
	int a[1000];
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}