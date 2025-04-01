#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);

	int i;
	for (i = 0; i < N / 4; i++)
	{
		printf("long ");
	}

	printf("int");

	return 0;
}