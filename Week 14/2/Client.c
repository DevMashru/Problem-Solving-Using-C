#include<stdio.h>
#include<stdlib.h>
#include "Server.h"
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
