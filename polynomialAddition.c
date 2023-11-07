#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int coeff;
    int power;
    struct node *next;
}node;
void insert(node** head)
{
    node *newnode = (node*)malloc(sizeof(node));
    node *temp;
    if(*head == NULL)
    {
        *head  = newnode;
        printf("Enter the coefficient and power of polynomial: ");
        scanf("%d %d",&newnode->coeff,&newnode->power);
        temp = *head;
        temp->next = NULL;
    }
    else
    {
        printf("Enter the coefficient and power of polynomial: ");
        scanf("%d %d",&newnode->coeff,&newnode->power);
        if(newnode->power < temp->power)
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        else if (newnode->power > temp->power)
        {
            newnode->next = temp;
            *head = newnode;
        }
    }
}
void display(node **head)
{
    node *temp = *head;
    while(temp != NULL)
    {
        printf(" %dX^%d +",temp->coeff,temp->power);
        temp = temp->next;
    }
    printf("\n");
}

/*void add(node ** head)
{
    node *temp = *head;int c=1;
    while(temp !=NULL)
    {
        c++;
        temp= temp->next;
    }
    temp = *head;
    for(int i=0; i<c; i++)
    {
        for(int j=i+1; j<c; j++)
        {
            if(temp->power == )
        }
    }
}*/

int main()
{
    node *head = NULL;
    insert(&head);
    insert(&head);
    insert(&head);
    insert(&head);
    display(&head);

}