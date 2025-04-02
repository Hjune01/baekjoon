#include <stdio.h>
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int a;
	int basket[101];
	for (a = 1; a <= N; a++)  // 배열1=1번 바구니, 배열2=2번 바구니...
	{
		basket[a] = a;
	}


	int i, j, b, temp;
	for (a = 0; a < M; a++)
	{
		scanf("%d %d", &i, &j);        // i j       i     j    i     j    i     j
		while (i <= j)                 // 1 4입력시 1번과 4번, 2번과 3번을 바꾸면 역순 
		{                              // 1 5입력시 1번과 5번, 2번과 4번, 3번과 3번을 바꾸면 역순    
			temp = basket[i];          // i는 증가하고 j는 감소한 값과 교체
			basket[i] = basket[j];
			basket[j] = temp;
			i++;
			j--;
		}
	}
	for (a = 1; a <= N; a++)
	{
		printf("%d ", basket[a]);
	}

	return 0;
}