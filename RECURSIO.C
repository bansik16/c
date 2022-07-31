#include<stdio.h>
#include<conio.h>
void rec(int i)
{
	if(i<9)
	{
		i++;
		rec(i);
		printf("\n%d",i);
	}
}
void main()
{
	int i=0;
	clrscr();
	rec(i);
	getch();
}