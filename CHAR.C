#include<stdio.h>
#include<conio.h>
#include <dos.h>
void main()
{
	int i,j,n;
	char t,a[50];
	clrscr();
	fflush(stdin);
	printf("how many elements do you want?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("sorted list");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	getch();
}