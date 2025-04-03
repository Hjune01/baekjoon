#include <stdio.h>
int main(void)
{
	char s[100];
	scanf("%s", s);

	int i;
	int cnt = 0;
	for (i = 0; i < 100; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}