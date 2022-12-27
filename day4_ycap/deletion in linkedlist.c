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
struct Node * deletefirst(struct Node * head)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}

struct Node * deleteatindex(struct Node* head,int index)
{
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
       p = p->next;
       q = q->next;
    }
    p->next = q->next;
    free(q);
    
    return head;
}
struct Node *deleteatEnd(struct Node* head)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;

}

struct Node *deletenodewithelement(struct Node* head, int value)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value)
    {
      p->next = q->next;
        free(q);  
    }
    return head;

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
    
    head->data = 4;
    head->next = sec;
    

    
    sec->data = 3;
    sec->next = thi;

    
    thi->data = 8;
    thi->next = four;

    // 
    four->data = 1;
    four->next = NULL;
    printf("Linked list before deletion\n");
    linkedlist_traversal(head);
    printf("Linked list after deletion\n");
    head = deletenodewithelement(head,7); 
    linkedlist_traversal(head);

    return 0;
}