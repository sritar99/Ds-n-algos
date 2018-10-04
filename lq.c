#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int q[MAX],rear=-1,front=-1;
int insert()
{
	int x;
	if(rear==MAX-1)
		printf("queue overflow\n");
	else{
        if(front==-1)
        	front=0;
        printf("enter element\n");
        scanf("%d",&x);
        rear=rear+1;
        q[rear]=x;

	} 
  return 0;
}

int delete()
{
	if(front==-1||front>rear)
		printf("queue underflow");
	else
	{
		printf("Item deleted %d\n",q[front]);
		front=front+1;
	}
	return 0;

}

int display()
{
	int i;
	if(front==-1)
		printf("queue is empty\n");
	else{
		printf("elements in queue:\n");
		for(i=front;i<=rear;i++)
			printf("%d\n",q[i]);
	}
	return 0;
}

int main(){
    int ch;
    do
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } /*End of switch*/
    }while(ch!=4);
    return 0; /*End of while*/
} 
