#include <stdio.h>

int main()
{
	int n, temp, v = 1;
	int i, j;
	printf("Enter rows: ");
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
	{
		printf("\n%-3d", v);
		temp = v;
		for (j = i; j <= n - 1; j++)
		{
			temp -= j;
			printf("%-3d", temp);
		}
		v += i;
	}
	return (0);
}
