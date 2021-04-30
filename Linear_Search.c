#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int linearSearch(int *a, int key, int imin, int imax)
{
	int i;
	for (i = imin; i<=imax; i++)
	{
		if (a[i] == key)
		   return i;
	}
}

int main()
{
	int *arr = NULL;
	int num, key, loc, i;
	
	printf("How many numbers: ");
	scanf("%d", num);
	
	arr = (int*)malloc(num * sizeof(int));
	printf("Enter the numbers:\n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the search key: ");
	scanf("%d", &key);
	
	loc = linearSearch(arr, key, 0, num-1);
	
	if (loc == -1)
	{
		printf("Key not found\n");
	}
	else
	{
		printf("Key found at position %d\n", loc+1);
	}
	
	getch();
	return(0);
}





