#include <stdio.h>
int main(void)
{
	char a[1000001];
	gets(a);
	
	int i;
	int cnt = 0;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != ' ' && a[i+1] == ' ') // 문자뒤에 공백있으면 단어로 카운트함
		{
			cnt++;
		}
	}

	if (a[strlen(a) - 1] == ' ') // 마지막 문자열이 공백이면 카운트-1
	{
		cnt--;
	}
	
	printf("%d", cnt + 1);  // The Curious Case of Benjamin Button
	                        // 공백은 5개 단어는 6개이므로 카운트+1
	return 0;
}