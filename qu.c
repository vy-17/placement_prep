#include<stdio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node node;
node *start=NULL,*temp,*head,*front=NULL,*rear=NULL;

int isEmpty()
{
  if(front==NULL)
  {
     return 1;
  }
  else
     return 0;
}
node* create(int data)
{
    head=(node*)malloc(sizeof(node));
    head->data=data;
    head->next=NULL;
    return head;
}

void enQueue(int data)
{
  
  
   node* head1=create(data);
   
   if(rear!=NULL)
   {
      rear->next=head1;
      rear=head1;
   }
   else
   {
     rear=front=head1;
   }
  
}

void deQueue()
{
   if(isEmpty()==1)
      printf("\nQueue is empty");
   else
   {
   node* head2=front;
   front=front->next;
   free(head2);
   }   
}
void peek()
{
  if(isEmpty()==1)
      printf("\nQueue is empty");
   else
  printf("\ncurrent element=%d",rear->data);
}
void display()
{
    if(isEmpty()==1)
      printf("\nQueue is empty");
   else
   {
   node* temp1=front;
   while(temp1->next!=NULL)
   {
      printf("%d",temp1->data);
      temp1=temp1->next;
   }
   printf("%d",temp1->data);
  }
}
int main()
{
   int ch=1,ch1,data;
   while(ch==1)
   {
     printf("\n1.enQueue \n2.deQueue \n 3.Peek \n4.display\nEnter the choice ");
     scanf("%d",&ch1);
     switch(ch1)
     {
        case 1: printf("\nEnter the data:");
                scanf("%d",&data);
                
                enQueue(data);
                break;
        case 2: deQueue();
                break;
        case 3: peek();
                break;
        case 4: display();
                break;
     }
     printf("\n1.Continue \n2.stop");
     scanf("%d",&ch);
   }
   
}
