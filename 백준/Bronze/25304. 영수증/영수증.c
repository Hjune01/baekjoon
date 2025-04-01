#include <stdio.h>
int main(void)
{
	int X, N;
	scanf("%d", &X);
	scanf("%d", &N);

	int i, a, b;
	int total = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		total += a * b;
	}
	if (total == X)
	{
		printf("Yes");
	}
	else printf("No");

	return 0;
}