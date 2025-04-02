#include <stdio.h>
int main(void)
{
	int n[10];
	int i, j;
	for (i = 0; i < 10; i++)  //숫자 10개를 입력받고
	{                         //42로 나눈 나머지를 배열에 저장(0~41)
		scanf("%d", &n[i]);
		n[i] = n[i] % 42;
	}

	int cnt;
	int a = 0;

	for (i = 0; i < 42; i++) //42로 나누었을 때 가능한 나머지 0~41
	{
		cnt = 0;
		for (j = 0; j < 10; j++)  // 배열의 수와 0~41비교
		{
			if (n[j] == i)  // 배열의 수(나머지)에 0~41까지 수 중에서 겹치는 경우 카운트
			{               // 만약 나머지가 1,1,1,3,3,3,4,4,4,5 라면
				cnt++;      // 1(cnt=3), 3(cnt=3), 4(cnt=3), 5(cnt=1)
			}
		}
		if (cnt >= 1)       // cnt가 1이상이면 나머지 종류a에 +1
		{                   
			a++;
		}
	}

	printf("%d\n", a);

	return 0;
}