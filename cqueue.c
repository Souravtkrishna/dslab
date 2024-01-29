#include<stdio.h> 
#include<stdlib.h> 
#define SIZE 2

void enqueue(int);
int dequeue();
void display();

int queue[SIZE],front=-1,rear=-1;  



int main()  
{  
    int choice=1,x;    
          
    while(choice<4 && choice!=0)   
    {  
        printf("\n Press 1: Insert an element\n");  
        printf("\nPress 2: Delete an element\n");  
        printf("\nPress 3: Display the element\n");
        printf("\nPress4: Exit\n");
        printf("\nEnter your choice\n");  
        scanf("%d", &choice);  
          
        switch(choice)  
        {  
              
            case 1:enqueue(x);  
                   break;  
            case 2:dequeue();  
                   break;  
            case 3:display();
                   break;
            case 4:exit(0);
            default:printf("\n wrong selection\n"); 
      
        }
     }  
        return 0;  
}  
  
void enqueue(int x)  
{  
   if(front==-1 && rear==-1)   
   {  
        front=0;  
        rear=0;  
        printf("\nEnter the element which is to be inserted");  
        scanf("%d", &x);  
        queue[rear]=x; 
        printf("\n %d inserted\n",queue[rear]);  
   }  
   else if((rear+1)%SIZE==front) 
   {  
       printf("\nQueue is overflow..\n");  
   }  
   else  
   {  
       rear=(rear+1)%SIZE;
       printf("\nEnter the element which is to be inserted");  
       scanf("%d", &x);         
       queue[rear]=x; 
        printf("\n %d inserted\n",queue[rear]);      
   } 

}  
int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is underflow..\n");  
    }  
    else if(front==rear)  
    {  
       printf("\nThe dequeued element is %d\n", queue[front]);  
       front=-1;  
       rear=-1;  
    }   
    else  
    {  
        printf("\nThe dequeued element is %d\n", queue[front]);  
       front=(front+1)%SIZE;  
    }  
}  
   
void display()  
{  
   int i=front;
   if(front==-1 && rear-1)
   {
      printf("\n queue is empty,,\n");
   }
   else
   {
      printf("\n elements in a queue :\n");
      while(i!=rear)
      {
        printf("%d\n",queue[i]);
        i=(i+1)%SIZE;
      }
      printf("%d \n",queue[i]);
    }
}
