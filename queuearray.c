#include<stdio.h>
#define max 5
int queue[10];
int front=-1;
int rear=-1;
void ins();
void del();
void dsp();
int main()
{
   
    int choice;
    while(choice!=4)
    {
        printf("\n......MENU......");
        printf("\n1:Insert an element\n2:Delete an element\n3:Display the elements\n4:exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                ins();
                break;
            }
            case 2:
            {
                del();
                break;
            }
            case 3:
            {
                dsp();
                break;
            }
            case 4:
            {
                printf("Exited.............");
                break;
            }
            default:
            {
                printf("Invalid choice...!!!\n");
            }
        }
    }
}
    void ins()
    {
        int val;
        if((rear+1)%max==front)
        {
            printf("Queue Overflow...\n");
        }
        else
        {
            if(front==-1)
            {
                front=0;
            }
            printf("Enter the element in the queue: ");
            scanf("%d",&val);
            rear=rear+1;
            queue[rear]=val;
            printf("One element inserted");
        }
    }

    void del()
    {
        if(front == -1 || front > rear)
        {
            printf("Queue Underflow...\n");
            return;
        }
       
        else if(front==rear)
        {
            front=-1;
            rear=-1;
            printf("line1....\n");
        }
        else if(front==max-1)
        {
            front=0;
            printf("line2....\n");
        }
        else
        {
            front=front+1;
            printf("One element is deleted...\n");
        }
       
       
    }

    void dsp()
    {
        if(front == -1 || front > rear)
        {
            printf("Queue is empty...\n");
        }
        else
        {
            printf("elements in the Queue are:");
            for(int i=front;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
            printf("\n");
        }
    }
