#include<stdio.h>
#include<conio.h>

void main()
{
	int t,i,j,a[5],n;
	clrscr();
	printf("enter elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
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