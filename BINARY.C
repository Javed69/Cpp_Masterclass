#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int binary(int [] ,int ,int ,int);

int main()
{
	int a[100], n, x, i;
	int value;
	
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++);
	scanf("%d", &a[i]);
	
	printf("Enter the value to be searched:\n");
	scanf("%d", &x);
	
	value = binary(a, 0, n-1, x);
	if(value == -1)
	printf("Value not found...");
	else
	printf("Value found at a[%d]\n", value);
	getch();
	return(0);

}





int binary(int a[], int low, int high, int x)
{

			int mid = (low+high)/2;
			if(x == a[mid])
			return mid;
			else if(x < a[mid])
			return (binary(a, low, mid-1, x));
			else if(x > a[mid])
			return(binary(a, mid+1, high, x));
			else
			return -1;

}

