#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

void insertAtEnd(node **head)
{
    node *new = (node*)malloc(sizeof(node));
    node *temp;
    if(*head == NULL)
    {
        *head = new;
        printf("Enter the data : \n");
        scanf("%d",&new->data);
        new->next = NULL;
        temp = *head;
    }
    else
    {
        while(temp->next != NULL)
        {
        temp = temp->next;
        }
        temp->next = new;
        printf("enter the data \n");
        scanf("%d",&new->data);
        new->next = NULL;
    }
}
void display(node **head)
{
    node *temp = *head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void FindAnElement(node **head,int key)
{
    node *temp = *head;
    while((temp->data != key) && (temp != NULL))
    {
        temp = temp->next;
    }
    if( temp->data == key)
    printf("the element is present in linked list. \n");
    
    else
    printf("Element is not  present in the list. \n");
}

void insertAtPosition(node **head,int d,int pos)
{
    node *temp = *head;
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = d;
    int i=1;
    while(i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    node *head = NULL;
    insertAtEnd(&head);
    insertAtEnd(&head);
    insertAtEnd(&head);
    insertAtEnd(&head);
    insertAtPosition(&head,5,3);
    display(&head);
    // FindAnElement(&head,8);
}