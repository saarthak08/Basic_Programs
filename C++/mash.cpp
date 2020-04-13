#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *next,*pre,*up,*down;
};

int main()
{
	struct node *new_node,*ptr,*head1,*head2,*head3,*head4,*ptr1,*new_node1=NULL,*up2,*up3,*up4;
	int n,i,j;
	cout << "Enter the elements columnwise:" << endl;	
	head1=(struct node *)malloc(sizeof(struct node));
	cin >>head1->data;
	new_node=head1;
	new_node->pre=NULL;
	new_node->up=NULL;
	new_node1=head1;
	for(i=0;i<3;i++)
	{
		ptr1=new_node1;
		ptr1->pre=NULL;
		new_node1=(struct node *)malloc(sizeof(struct node));
		cin >> new_node1->data;					
		ptr1->down=new_node1;			
		new_node1->down=NULL;
		new_node1->up=ptr1;
		switch(i)
		{
			case 0: head2=new_node; break;
			case 1:	head3=new_node; break;
			case 2: head4=new_node; break;
		}	
		
	}
	cin >> new_node->data;					
	for(i=1;i<4;i++)
	{
		ptr=new_node;		
		ptr->up=NULL;			
		new_node=(struct node *)malloc(sizeof(struct node));
		cin >> new_node->data;					
		ptr->next=new_node;
		new_node->pre=ptr;			
		new_node->next=NULL;
		new_node1=new_node;
		switch(i)
		{
			case 1: up2=new_node; break;
			case 2:	up3=new_node; break;
			case 3: up4=new_node; break;
		}	
		for(j=0;j<3;j++)
		{
			ptr1=new_node1;
			new_node1=(struct node *)malloc(sizeof(struct node));
			cin >> new_node1->data;					
			ptr1->down=new_node1;			
			new_node1->down=NULL;
			new_node1->up=ptr1;
			if(i==3)
			{
				new_node1->next=NULL;
			}
		}
	}
	ptr=up4;
	while(ptr->down!=NULL)
	{
		ptr->next=NULL;
		ptr=ptr->down;
	}
	ptr=head1;
	cout <<"\n\nEntered Linked List:" <<endl;
	while(ptr->next!=NULL)
	{
		cout <<ptr->data <<"\t";
		ptr1=ptr;
		while(ptr1->down!=NULL)
		{
			cout <<ptr1->data<<"\n";
			ptr1=ptr1->down;
		}
		ptr=ptr->next;
	}
}
