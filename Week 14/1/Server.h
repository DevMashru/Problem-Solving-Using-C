typedef struct Node
{
    int data;
    struct Node *next;  
}ll;
void insert_front(ll **head, int n);
void insert_end(ll **head, int n);
void sum_of_alternate(ll *head);
void sum(ll *head);
void sum_of_elements(ll *head);
void display(ll *node);