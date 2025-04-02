#include <stdio.h>
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	
	int a;
	int basket[100];
	for (a = 0; a < N; a++)
	{
		basket[a] = a + 1;
	}

	int i, j, temp;
	for (a = 0; a < M; a++)
	{
		scanf("%d %d", &i, &j);
		temp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = temp;
	}

	for (a = 0; a < N; a++)
	{
		printf("%d ", basket[a]);
	}

	return 0;
}