#include<stdio.h>
#include<conio.h>
struct linklist
{
	int data;
	struct linklist *next;
}*start=NULL,*end=NULL,*temp=NULL;

void inslast()
{
	temp=(struct linklist*)malloc(sizeof(struct linklist*));
	printf("enter number:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		end->next=temp;
	}
	end=temp;
}

void insfirst()
{
	temp=(struct linklist*)malloc(sizeof(struct linklist*));
	printf("enter number:");
	scanf("%d",&temp->data);
	temp->next=start;
	if(end==NULL)
	{
		end=temp;
	}
	start=temp;
}

void delfirst()
{
	temp=start;
	start=start->next;
	free(temp);
}

void dellast()
{
	if(start==end)
	{
		free(start);
		start=NULL;
		end=NULL;
		temp=NULL;
	}
	else
	{
		for(temp=start;temp->next->next!=NULL;temp=temp->next);
		free(temp->next);
		temp->next=NULL;
	}
}

void display()
{
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("%d-> ",temp->data);
	}
	printf("\nLIST IS EMPTY");
}

void search()
{
	int se,flag=0;
	printf("which element you want to search?");
	scanf("%d",&se);
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			printf("\nfound");
			flag=1;
			break;
		}
		else
		{
			printf("\nnot found");
		}
	}
}

void main()
{
	int choice;
	clrscr();
	do
	{
		printf("\npress:1->inslast\n2->insfirst\n3->delfirst\n4->dellast\n5->display\n6->search\n0->exit");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: inslast();
				getch();
				break;
			case 2: insfirst();
				getch();
				break;
			case 3: delfirst();
				getch();
				break;
			case 4: dellast();
				getch();
				break;
			case 5: display();
				getch();
				break;
			case 6: search();
				getch();
				break;
			case 0: exit();
				getch();
			default:
				printf("\nenter proper choice");
				break;
		}
	}while(1);
	getch();
}
