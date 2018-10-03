#include<stdio.h>
#include <stdlib.h>
int stack[100],ch,i,top,x,n;
int push();
int pop();
int display();

int main()
{
	int top=-1;
	printf("Enter size of the stack:\n");
	scanf("%d",&n);
	do
	{
		printf("\n1.Push\n2.Pop\n3.display\n4.Exit\nEnter ur choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);break;
			default:printf("Invalid choice\n");
		}

	}while(ch!=4);
	return 0;
}

int push()
{
	if(top>n-1)
	printf("Stack overflow");
else {
	printf("Enter the element:\n");
	scanf("%d",&x);
	top++;
	stack[top]=x;
}
return 0;

}

int pop()
{
	if(top<=-1)
		printf("Stack underflow\n");
	else
	{
		printf("%d element is popped",stack[top]);
		top--;
	}
	return 0;
}

int display()
{
	if(top>=0){
		printf("elements in the stack:\n");
	    for(i=top;i>0;i--)
	    {
	    	printf("%d",stack[i]);
	    }
	}
	else
		printf("Stack is empty\n");

	return 0;
}