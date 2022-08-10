#include<stdio.h>
#include<conio.h>
struct linklist
{
	int data;
	struct linklist *prv;
	struct linklist *next;
}*start=NULL,*end=NULL,*temp=NULL;

void inslast()
{
	FILE *fp;
	temp=(struct linklist*)malloc(sizeof(struct linklist*));
	fp=fopen("link.txt","w");
	printf("enter number:");
	scanf("%d",&temp->data);
	fprintf(fp,"%d",temp->data);
	temp->prv=end;
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
	fclose(fp);
}

void insfirst()
{
	temp=(struct linklist*)malloc(sizeof(struct linklist*));
	fp=fopen("link.txt","a");
	printf("enter number:");
	scanf("%d",&temp->data);
	fprintf(fp,"%d",temp->data);
	temp->prv=NULL;
	temp->next=start;
	if(start==NULL)
	{
		end=temp;
	}
	else
	{
		start->prv=temp;
	}
	start=temp;
	fclose(fp);
}

void dellast()
{
	fp=fopen("link.txt","a");
			if(start==NULL)
				{
					printf("list is empty");
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
					temp=end;
					end=end->prv;
					printf("%d is deleted",temp->data);
					getch();
					free(temp);
					end->next=NULL;
				}
				fclose(fp);
}
void delfirst()
{
	fp=fopen("link.txt","a");
	if(start==NULL)
	{
		printf("list is empty");
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
		temp=start;
		start=start->next;
		printf("%d is deleted",temp->data);
		getch();
		free(temp);
		start->prv=NULL;
	}
}
void delbet()
{
	int se;
	struct linklist *x;
	printf("enter the data to search:");
	scanf("%d",&se);
	for(temp=start;temp->next->data!=se && temp!=NULL; temp=temp->next)
	{
	}
	if(temp->next->data==se)
	{
		printf("data deleted");
		x=temp->next;
		temp->next=temp->next->next;
		temp->next->prv=temp;
		free(x);

	}
} */
void display()
{
	FILE *fp;
	fp=fopen("link.txt","r");
	if(start==NULL)
	{
		printf("\nlist is empty");
		fprintf(fp,"\nlist is empty");
	}
	else
	{
		for(temp=end;temp!=NULL;temp=temp->prv)
		{
			printf("%d-> ",temp->data);
			fprintf(fp,"%d-> ",temp->data);
		}
	}
	fclose(fp);

}
/*
void search()
{
	int se,flag=0;
	printf("which element you want to search?");
	scanf("%d",&se);
	for(temp=end;temp!=NULL;temp=temp->prv)
	{
		if(se==temp->data)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
			printf("\nfound");
	else
			printf("\nnot found");

}
void insbet()
{
	int se;
	struct linklist *x;
	printf("enter the data to search:");
	scanf("%d",&se);
	for(temp=start;temp->next->data!=se && temp!=NULL; temp=temp->next)
	{
	}
	if(temp->next->data==se)
	{
		x=(struct linklist *)malloc(sizeof(struct linklist));
		printf("enter data:");
		scanf("%d",&x->data);
		x->next=temp->next;
		x->prv=temp;
		temp->next=x;
		x->next->prv=x;
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
*/
void main()
{
	int choice;
	clrscr();
	do
	{
		clrscr();
		printf("\npress:1->insert last\n2->insert first\n3->delete first\n4->delete last\n5->display\n6->search\n7->update\n8->insert between\n9 delete between\n0->exit");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: inslast();
				getch();
				break;
		  /*	case 2: insfirst();
				getch();
				break;
			case 3: delfirst();
				getch();
				break;
			case 4: dellast();
				getch();
				break;*/
			case 5: display();
				getch();
				break;
		 /*	case 6: search();
				getch();
				break;
			case 7: update();
				getch();
				break;
			case 8:insbet();
					getch();
					break;
			case 9: delbet();
				 getch();
				 break; */
			case 0: exit();
				getch();
			default:
				printf("\nenter proper choice");
				break;
		}
	}while(1);
	getch();
}

