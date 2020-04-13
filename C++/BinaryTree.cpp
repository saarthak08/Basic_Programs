#include<iostream>
#include<stdlib.h>
#define MAX 100

using namespace std;
struct node
{
	int data;
	node *rc;
	node *lc;
};

int queue[MAX];
int front,rear=0;
int size;

void enqueue(int x)
{
	if((front=(rear+1)%MAX)||(front==0&&rear=MAX-1))
	{
		cout <<"Queue is full"<<endl;
	}
	else
		rear=(rear+1)%MAX;
		queue[rear]=x;
}

int dequeue()
{
	if(front==rear)
	{
		cout<<"Queue
int main()
{
	struct node *Tree,*root,*new_node;
		
