#include<stdio.h>
typedef struct Node
{
  int data;
  Node * link;
}node;
typedef struct list
{
  node *head;
}l;
typedef struct queue
{
  l *ptr_list;
}q;
void init(l *);
void enqueue(l *,int );
void dequeue(l *);
int main()
{
  q *ptr_queue;
  init(ptr_queue->ptr_list);
  int choice,data;
  do
  {
    printf("1.enqueue 2.dequeue 3.exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("Enter data:");
          scanf("%d",&data);
          enqueue(ptr_queue->ptr_list);
          break;
        case 2:
          dequeue(ptr_queue->ptr_list);
          break;
    }while(choice<3);
  }
}
void init(l *list)
{
  list->head=NULL;
}
void enqueue(l *list,int data)
{
  node *temp=(node*)malloc(sizeof(node));
  temp->data=data;
  temp->link=NULL;
  if(list->head!=NULL)
  {
    node *p=list->head;
    while(p->link!=NULL)
      p=p->link;
    p->link=temp;
  }
  else
    list->head=temp;
}
void dequeue(l *list)
{
  if(list->head!=NULL)
  {
    node *p=list->head;
    list->head=list-head->link;
    printf("%d\n",p->data);
    free(p);
  }
}
