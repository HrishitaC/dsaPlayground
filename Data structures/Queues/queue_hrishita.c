#include<stdio.h>

int QUEUE[10], front=-1, rear=-1;

void enqueue()
{
	if(rear==9)
	{
		printf("\nQueue overflow");
	}
	else
	{
		int n;
		printf("\nEnter an integer: ");
		scanf("%d",&n);
		if(rear==-1)
		{
			++front;
		}
		QUEUE[++rear]=n;
	}
}

void dequeue()
{
	if(front==-1)
	{
		printf("\nQueue underflow");
	}
	else
	{
		printf("\nElement to be deleted: %d", QUEUE[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

void isempty()
{
	if(rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\n Queue is not empty");
	}
}

void isfull()
{
	if(rear==9)
	{
		printf("\nuQueue is full");
	}
	else
	{
		printf("\nQueue is not full");
	}
}

void display()
{
	if(front==-1)
	{
		printf("\nQueue underflow");
	}
	else
	{
		int i;
		printf("\n");
		for(i=front;i<rear;i++)
		{
			printf("%d <--",QUEUE[i]);
		}
		printf("%d",QUEUE[rear]);
	}
}

int main()
{
	int choice, cont=1;
	while(cont==1)
	{
		printf("\nMENU \n1.Enqueue \n2.Dequeue \n3.IsEmpty \n4.IsFull \n5.Display \nYour choice (1-5): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: isempty();
					break;
			case 4: isfull();
					break;
			case 5: display();
					break;
			default:printf("\nInvalid input");
					break;
		}
		printf("\nEnter 1 to continue and 0 to exit: ");
		scanf("%d",&cont);
	}
	return 0;
}
