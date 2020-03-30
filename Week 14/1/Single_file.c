#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;  
}ll;
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
int main()
{
    int i,n,d;
    ll *node=NULL;
    printf("Enter number of elements to be inserted");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        printf("Enter the element");
        scanf("%d",&d);
        insert_end(&node,d);
    }
    while(1)
    {
        printf("Enter 1. To display\n2. To insert at the beggining\n3. To insert at end\n4. To find sum of alternate node elements\n5. To find sum of all elements\n6. To find sum of even and odd node elements in the list\n7. To exit");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            display(node);
            break;
        case 2:
            printf("Enter the element");
            scanf("%d",&d);
            insert_front(&node,d);
            break;
        case 3:
            printf("Enter the element");
            scanf("%d",&d);
            insert_end(&node,d);
            break;
        case 4:
            sum_of_alternate(node);
            break;
        case 5:
            sum(node);
            break;
        case 6:
            sum_of_elements(node);
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid option");
        }
    }
}