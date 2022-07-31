#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,j,k,num,tmp;
	clrscr();
	printf("how many elements?");
	scanf("%d",&num);
	for(k=0;k<num;k++)
	{
		scanf("%d",&a[k]);
	}
	for(i=num/2;i>0;i=i/2)
	{
		for(j=i;j<num;j++)
		{
			for(k=j-i;k>=0;k=k-1)
			{
				if(a[k+i]>=a[k])
					break;
				else
				{
					tmp=a[k];
					a[k]=a[k+i];
					a[k+i]=tmp;
				}
			}
		}
	}
	printf("\nsorted elements are:");
	for(k=0;k<num;k++)
	{
		printf("%d",a[k]);
	}
	getch();
}
