#include <stdio.h>
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int basket[100] = { 0 };

	int i, j;
	int k;
	int a, b;
	for (a = 0; a < M; a++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (b = i; b <= j; b++)
		{
			basket[b - 1] = k;
		}
	}
	
	for (a = 0; a < N; a++)
	{
		printf("%d ", basket[a]);
	}

	return 0;
}