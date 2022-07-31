#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,tt;
	char t,a[5][6];
	clrscr();
	printf("how many elements do you want?");
	scanf("%d",&tt);
	for(i=0;i<tt;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<tt-1;i++)
	{
		for(j=0;j<tt-i-1;j++)
		{
			if(strcmp(a[j],a[j+1]))
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("sorted list\n");
	for(i=0;i<tt;i++)
	{
		printf("%s\n",a[i]);
	}
	getch();
}