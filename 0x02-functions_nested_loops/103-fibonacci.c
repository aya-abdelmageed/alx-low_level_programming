#include <stdio.h>

/**
 * main - fibonacci
 * Return: always 0
 */
int main(void)
{
	float ans;
	unsigned long f1 = 0, f2 = 1, sum;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			ans += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", ans);
	return (0);
}
