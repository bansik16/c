#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,tt;
	char t,a[50];
	clrscr();
	printf("how many elements do you want?");
	scanf("%d",&tt);
	for(i=0;i<=tt;i++)
	{
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	for(i=0;i<tt-1;i++)
	{
		for(j=0;j<tt-i;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nsorted list\n");
	for(i=0;i<=tt;i++)
	{
		printf("%c",a[i]);
	}
	getch();
}