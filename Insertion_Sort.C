#include<stdio.h>
#include<conio.h>

void main()
{
	int n,k,a[100],i,x;
	clrscr();
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(k=1;k<=n-1;k++)
	{
		x=a[k];
		i=k-1;
		while(i>=0 && a[i]>x)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=x;
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	printf("%4d\t",a[i]);
	getch();
}
