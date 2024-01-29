#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
struct node
       {
       int data;
       struct node*link;
       }
       *top,*top1,*temp;
       void main()
       {
       int value,choice;
       while(1)
       {
       printf("\n1.push\n2.pop\n3.display\n4.exit\n");
       printf("enter your choice");
       scanf("%d",&choice);
       switch(choice)
       { 
       case 1:printf("enter the value to be inserted:");
              scanf("%d",&value);
              push(value);
              break; 
       case 2:pop();
             break;
       case 3:display();      
             break; 
       case 4:exit(0);
       default:printf("wrong choice");
       }
       }
       }
       void push(int element)
       {
       if(top==NULL)
       {
       top=(struct node*)malloc(1*sizeof(struct node));
       top-> link=NULL;
       top ->data=element;
       }
       else
       {
       temp=(struct node*)malloc(1*sizeof(struct node));
       temp->link=top;
       temp->data=element;
       top=temp;
       }
       }
        void pop()
        {  
         top1=top;
         if(top1==NULL)
         {
           printf("empty");
           }
           else
           {
           top1=top->link;
           printf("popped element %d \n",top->data);
           free(top);
           top=top1;
           }
           }
           void display()
           {
            top1=top;
           if(top1==NULL)
           {
             printf("empty");
           }
           while(top1!=NULL)
           {
             printf("%d->",top1->data);
             top1=top1->link;
             }
             }
             
                                                                                                                                                                                               
       
       
       
