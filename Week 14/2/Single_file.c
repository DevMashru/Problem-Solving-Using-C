#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}ll;
void insert(ll **head, int n)
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
void delete_front(ll **head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
        return;
    }
    ll *temp=(ll*)malloc(sizeof(ll));
    temp=*head;
    *head=(*head)->next;
    free(temp);
    printf("Element deleted\n");
}
void delete_end(ll **head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
        return;
    }
    ll *second_last=*head;
    //second_last=(ll*)malloc(sizeof(ll));
    while((second_last->next->next)!=NULL)
    {
        second_last=second_last->next;
    }
    free(second_last->next);
    second_last->next=NULL;
    printf("Element deleted\n");
}
void display(ll *node)
{
    while (node!=NULL)
    {
        printf("%d\n",node->data);
        node=node->next;
    }
}
void search(ll *node,int n)
{
    if(node==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    while(node!=NULL)
    {
        if((node->data)==n)
        {
            printf("Element found\n");
            return;
        }
        node=node->next;
    }
    printf("Element not found\n");
}
void product(ll *node, int n)
{
    int p=1,f=1;
    if(node==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    while(node!=NULL)
    {
        if((node->data)%n==0)
        {
            p*=(node->data);
            f=0;
        }
        node=node->next;
    }
    if(!f)
        printf("Product= %d\n",p);
    else
        printf("No element is divisible\n");
}
int main()
{
    int c,e,n,d;
    ll *node=NULL;
    printf("Enter number of elements to be inserted");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        printf("Enter the element");
        scanf("%d",&d);
        insert(&node,d);
    }
    while(1)
    {
        printf("Enter 1. To delete at front\n2. To delete at end\n3. To display\n4. Search for an element\n5. To product of the nodes of a linked list which are divisible by given number\n6 To exit");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            delete_front(&node);
            break;
        case 2:
            delete_end(&node);
            break;
        case 3:
            display(node);
            break;
        case 4:
            printf("Enter the element to be searched");
            scanf("%d",&e);
            search(node,e);
            break;
        case 5:
            printf("Enter the number by which element should be divisible");
            scanf("%d",&e);
            product(node,e);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid option");
        }
    }
    return 0;
}