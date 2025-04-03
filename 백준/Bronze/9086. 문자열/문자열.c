#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d", &T);

	int i, j;
	char s[1000];
	char first, last;
	for (i = 0; i < T; i++)
	{
		scanf("%s", s);
		j = 0;
		first = s[0];
		while (s[j] != '\0')
		{
			j++;
		}
		last = s[j-1];
		printf("%c%c\n", first, last);
	}

	return 0;
}