
#include<stdio.h>
#include<conio.h>
int partition(int a[],int lb,int ub)
{
	int down,up,x,temp;
	down=lb; up=ub;
	x=a[lb];
	while(down<up)
	{
		while(a[down]<=x&&down<up)
			down++;
		while(a[up]>x)
			up--;
		if(down<up)
		{
			temp=a[down];
			a[down]=a[up];
			a[up]=temp;
		}
	}
	a[lb]=a[up];
	a[up]=x;
	return up;
}
void quicksort(int a[],int lb,int ub)
{


	int j;
	if(lb<ub)
	{
		j=partition(a,lb,ub);
		quicksort(a,lb,j-1);
		quicksort(a,j+1,ub);
	}
}
void main()
{
	int a[10],n,i;
	clrscr();
	printf("Enter the numbers of elements \n");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1)
	printf("",a[0]);
	else if(n==2)
	{
		if(a[0]>=a[1])
		printf("",a[1],a[0]);
		else
		printf("",a[0],a[1]);
	}
	else
	quicksort(a,0,n-1);
	printf("Sorted array;\n");

	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	getch();
}







