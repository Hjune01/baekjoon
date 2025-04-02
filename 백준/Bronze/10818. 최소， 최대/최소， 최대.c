#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	int min = 1000000;
	int max = -1000000;
	int i, a;

	for (i = 0; i < N; i++)
	{
		scanf("%d", &a);

		if (a < min)
		{
			min = a;
		}
		if (a > max)
		{
			max = a;
		}
	}
	printf("%d %d", min, max);

	return 0;
}