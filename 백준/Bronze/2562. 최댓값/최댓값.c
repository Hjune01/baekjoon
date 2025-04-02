#include <stdio.h>
int main(void)
{
	int arr[9];
	int i;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int flag;
	int max = arr[0];
	for (i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			flag = i;
		}
	}
	printf("%d\n%d\n", max, flag + 1);

	return 0;
}