#include<stdio.h>
#include<conio.h>

void main()
{
	int n,j,a[100],i;
	clrscr();
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<=n-2;j++)
	{
		int max=a[0];
		int pos=0;
		for(i=1;i<=j;i++)
		if(a[j]>max)
		{
			max=a[i];
			pos=j;
		}
		a[pos]=a[j];
		a[j]=max;
	}
	printf("Sorted array:\n");
	for(i=0;i<=n-1;i++)

	printf("%4d",a[i]);
	getch();
}