#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,j,temp;
	printf("enter the 10 numbers:");
	for(i=0;i<10;i++)
	{
		printf("enter a value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("given numbers in ascending order:");
	for(i=0;i<10;i++)
		printf("\n%d",a[i]);
	getch();
}