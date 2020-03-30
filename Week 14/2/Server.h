typedef struct Node
{
    int data;
    struct Node *next;
}ll;
void insert(ll **head, int n);
void delete_front(ll **head);
void delete_end(ll **head);
void display(ll *node);
void search(ll *node,int n);
void product(ll *node, int n);