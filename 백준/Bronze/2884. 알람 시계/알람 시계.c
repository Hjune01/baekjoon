#include <stdio.h>
int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);

	int time, alarm, H_m;
	H_m = H * 60;
	time = H_m + M;

	alarm = time - 45;
	if (alarm < 0)
	{
		alarm += 24 * 60;
	}

	H = alarm / 60;
	M = alarm % 60;

	printf("%d %d", H, M);

	return 0;
}