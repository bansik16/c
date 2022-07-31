//link list using previous node method
#include<stdio.h>
#include<conio.h>
struct linklist
{
	int data;
	struct linklist *prv;
}*start=NULL,*end=NULL,*temp=NULL;

void inslast()
{
	temp=(struct linklist*)malloc(sizeof(struct linklist*));
	printf("enter number:");
	scanf("%d",&temp->data);
	temp->prv=end;
	if(start==NULL)
	{
		start=temp;
	}
	end=temp;
}

void insfirst()
{
	temp=(struct linklist*)malloc(sizeof(struct linklist*));
	printf("enter number:");
	scanf("%d",&temp->data);
	temp->prv=NULL;
	if(end==NULL)
	{
		end=temp;
	}
	else
	{
		start->prv=temp;
	}
	start=temp;
}

void delfirst()
{
	if(start==NULL)
	{
		temp=end;
		end=end->prv;
		free(temp);
	}
	else if(start==end)
	{
		free(start);
		start=NULL;
		end=NULL;
		temp=NULL;
	}
	else
	{
		for(temp=end;temp->prv->prv=NULL;temp=temp->prv);
		free(temp->prv);
		temp->prv=NULL;
		start=temp;
	}
}
void dellast()
{
	if(start==NULL)
	{
		temp=end;
		end=end->prv;
		free(temp);
	}
	else if(start=end)
	{
		free(start);
		start=NULL;
		end=NULL;
		temp=NULL;
	}
	else
	{
		printf("\nlist is empty");
	}
}

void display()
{
	if(start==NULL)
	{
		printf("\nlist is empty");
	}
	else
	{
		for(temp=end;temp!=NULL;temp=temp->prv)
		{
			printf("%d-> ",temp->data);
		}
	}
}
void search()
{
	int se,flag=0;
	printf("which element you want to search?");
	scanf("%d",&se);
	for(temp=end;temp!=NULL;temp=temp->prv)
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

void update()
{
	int flag=0;
	search();
	if(flag==1)
	{
		printf("which element you want to update?");
		scanf("%d",&temp->data);
	}
}

void main()
{
	int choice;
	clrscr();
	do
	{
		printf("\npress:1->inslast\n2->insfirst\n3->delfirst\n4->dellast\n5->display\n6->search\n7->update\n0->exit");
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
			case 7: update();
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

