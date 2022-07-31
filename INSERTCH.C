#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char a[50],x;
	clrscr();
	printf("enter characters:");
	scanf("%d",&n);
	n=n+1;
	for(i=0;i<n;i++)
	{
		scanf("%c",&x);
		j=i-1;
		while(x<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	a[i]='\0';
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	getch();
}