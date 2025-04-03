#include <stdio.h>
int main(void)
{
	int M;
	scanf("%d", &M);

	float score[1000];
	int i;
	for (i = 0; i < M; i++)
	{
		scanf("%f", &score[i]);
	}

	float max = 0;

	for (i = 0; i < M; i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
	}

	float sum = 0;
	for (i = 0; i < M; i++)
	{
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	
	float avg = sum / (float)M;

	printf("%.2f\n", avg);

	return 0;
}