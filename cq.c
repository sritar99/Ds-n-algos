#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

int insert();
int delete();
int display();

int Q[SIZE],front=-1,rear=-1,item;

int main()
{
	int ch;
    do
    {
        printf("\n1.Insert element to queue \n");
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
    return 0;
}

int insert()
{
	if((front==0 && rear==SIZE-1)||front==rear+1)
		printf("Queue is full\n");
	else{
		printf("\nEnter item:\n");
		scanf("%d",&item);
		if(rear==-1){
			rear=0;
			front=0;

		}

		else if(rear==SIZE-1){
			rear=0;

		}
		else
			rear++;
		Q[rear]=item;
	}

	return 0;
}

int delete()
{
	if(front==-1)
		printf("Queue is Empty\n");
	else{
		item=Q[front];

		if(front==rear)
		{
			front=-1;rear=-1;
		}
		else if(front==SIZE-1)
			front=0;
		else front++;
		printf("Item deleted\n");
	}
	return 0;

}

int	display()

{

int i;

    if(front==-1)
      printf("\n\nQueue is empty.\n");

    else{
    	printf("\n\n");

    	for(i=front; i<SIZE; i++)
    	 printf("\t%d",Q[i]);

    	for(i=0;i<=rear;i++)
    	printf("\t%d",Q[i]);
    }
return 0;

}


