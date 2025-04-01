int main(void)
{
	int A, B, cook_time;
	scanf("%d %d", &A, &B);
	scanf("%d", &cook_time);

	int current_time;
	A *= 60; //시간을 분으로
	current_time = A + B;
	current_time = current_time + cook_time;

	if (current_time >= 24 * 60)
	{
		current_time -= 24 * 60;
	}
	A = current_time / 60;
	B = current_time % 60;

	printf("%d %d", A, B);

	return 0;
}