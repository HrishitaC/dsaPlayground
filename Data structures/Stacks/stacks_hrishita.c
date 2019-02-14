#include<stdio.h>

int STACK[10], top=-1;

void push()
{
	if(top==9)
	{
		printf("\nStack overflow");
	}
	else
	{
		int n;
		printf("\nEnter an integer: ");
		scanf("%d",&n);
		STACK[++top]=n;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack underflow");
	}
	else
	{
		printf("\nElement to be deleted: %d",STACK[top]);
		top--;
	}
}

void isempty()
{
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nStack is not empty");
	}
}

void isfull()
{
	if(top==9)
	{
		printf("\nStack is full");
	}
	else
	{
		printf("\nStack is not full");
	}
}

void display()
{
	if(top==-1)
	{
		printf("\nStack underflow");
	}
	else
	{
		int i;
		printf("\n%d<--",STACK[top]);
		for(i=top-1;i>=0;i--)
		{
			printf("\n%d",STACK[i]);
		}
	}
}

int main()
{
	int choice, cont=1;
	while(cont==1)
	{
		printf("\nMENU: \n1.Push \n2.Pop \n3.IsEmpty \n4.IsFull \n5.Display \nYour choice(1-5): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
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
		printf("\nEnter 1 to continue or 0 to exit: ");
		scanf("%d",&cont);
	}
	return 0;
}
