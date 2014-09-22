#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void fun1(struct node* head)
{
  if(head == NULL)
    return;

  fun1(head->next);
  printf("%d  ", head->data);
}
int main()
{
    struct node* head;
    head->data=1;
    head->next=(struct node*) malloc(sizeof(struct node));
    head->next->data=2;
    head->next->next=NULL;
    fun1(head);
    return 0;
}
