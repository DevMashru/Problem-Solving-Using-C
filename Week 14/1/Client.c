#include<stdio.h>
#include "Server.h"
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