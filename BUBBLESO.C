#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,n,t,no;
	clrscr();
	printf("enter no:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("sorted list:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}