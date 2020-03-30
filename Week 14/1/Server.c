#include<stdio.h>
#include<stdlib.h>
#include "Server.h"
void insert_front(ll **head, int n)
{
    ll *new_node=(ll*)malloc(sizeof(ll));
    if(new_node==NULL)
    {
        printf("Memory not allocated");
        return;
    }
    new_node->data=n;
    new_node->next=(*head);
    *head=new_node;
}
void insert_end(ll **head, int n)
{
    ll *new_node=(ll*)malloc(sizeof(ll));
    ll *last=*head;
    if(new_node==NULL)
    {
        printf("Memory not allocated");
        return;
    }
    new_node->data=n;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    while ((last->next)!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}
void sum_of_alternate(ll *head)
{
    int s=0;
    while (head!=NULL)
    {
        s+=head->data;
        head=head->next;
        head=head->next;
    }
    printf("Sum of alternative nodes= %d\n",s);
}
void sum(ll *head)
{
    int s=0;
    while (head!=NULL)
    {
        s+=head->data;
        head=head->next;
    }
    printf("Sum of all elements = %d\n",s);
}
void sum_of_elements(ll *head)
{
    int se=0,so=0;
    while(head!=NULL)
    {
        if ((head->data)%2==0)
        {
            se+=(head->data);
        }
        else
        so+=(head->data);
        head=head->next;
    }
    printf("Sum of even elements= %d\n",se);
    printf("Sum of odd elements= %d\n",so);
}
void display(ll *node)
{
    while (node!=NULL)
    {
        printf("%d\n",node->data);
        node=node->next;
    }
}