#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *sec;
    struct Node *thi;
    struct Node *four;
    head = (struct Node *)malloc(sizeof(struct Node));
    sec = (struct Node *)malloc(sizeof(struct Node));
    thi = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 7;
    head->next = sec;
   
    sec->data = 9;
    sec->next = thi;

    thi->data = 8;
    thi->next = four;

    
    four->data = 10;
    four->next = NULL;
    linkedlist_traversal(head);

    return 0;
}