#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 10

typedef struct
{
 int item[MAXSIZE];
 int front,rear;
}queue;

void insert_front(queue *);
void insert_rear(queue *);
void delete_rear(queue *);
void delete_front(queue *);
void display(queue);

int main()
{
int ch;
queue q;
q.front=-1;
q.rear=-1;
 
 while(1)
 {
    printf("\n\n.To insert at front end \n2.To insert at rear end \n3.To Delete at front end \n4.To Delete at rear End \n5.To Display \n6.To Exit ");
    scanf("%d",&ch);

    switch(ch)
    { case 1:
        insert_front(&q);
        break;
     case 2:
        insert_rear(&q);
        break;
     case 3:
        delete_front(&q);
        break;
     case 4:
        delete_rear(&q);
        break;   
     case 5:  
        display(q);
        break;
     case 6:
        exit (0);
     default:
        printf("\n Wrong Value Entered...");
    }
 }
}
//INSERTION AT FRONT END//
void insert_front(queue *q)
{
    int x,i;
    if(q->rear==MAXSIZE-1)
    printf("\n D-Queue is overflow...");
    else
    {
        if(q->front==0)
        {
            for(i=q->rear;i>=0;i--)
            {
                q->item[i+1]=q->item[i];
            }
            q->item[q->front]=x;
        }
        else if(q->front==-1)
        {
            q->front=0;
            q->rear=0;
            q->item[q->front]=x;
        }
        else
        {
           q->front=q->front-1;
           q->item[q->front]=x;           
        }

    }   
}


//INSERTION AT REAR END//
void insert_rear(queue *q)
{
    int x;
    if(q->rear==MAXSIZE-1)
    printf("\n D-Queue is overflow...");
    else
    {
        printf("\n Enter the queue element to be inserted: ");
        scanf("%d",&x);
        if(q->front==-1)
        {
            q->front=q->front+1;
        }   
        q->rear=q->rear+1;
        q->item[q->rear]=x;
    }
}

//DELETION AT FRONT END//
void delete_front(queue *q)
{
    int x;
    if((q->front=q->rear) || (q->front==-1))
    printf("D-Queue is Underflow...");
    else
    {
        x=q->item[q->front];
        q->front=q->front+1;
        printf("\n the deleted queue element is %d",x);        
    }
}

 //DELETION AT REAR END//
void delete_rear(queue *q)
{
    int x;
    if(q->front=q->rear || q->front==-1)
    printf("\n D-Queue is Underflow...");
    else  
    {
        x=q->item[q->rear];
        if(q->front==q->rear)
        {
            q->front=-1;
            q->rear=-1;
        }
        else
            q->rear=q->rear-1;
            printf("\n The deleted element is %d",x);
    }
}

void display(queue q)
{
    if(q.front==-1 || q.front>q.rear)
    printf("\n D-Queue is underflow...");
    else
    {
        printf("\n");
        for(int i=q.front;i<=q.rear;i++)
        {
            printf("%d",q.item[i]);
        }
    }
}


