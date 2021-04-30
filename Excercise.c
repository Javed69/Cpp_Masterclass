#include<stdio.h>

int main()
{
	int i, j, diff, value, N;
	
	printf("Enter rows: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++)
	{
		diff = N-1;
		value = i;
		for(j=1; j<=i; j++)
		{
			printf("%-3d",value);
			value += diff;
			diff--;
		}
		printf("\n");
	}
	getch();
	return(0);
}
