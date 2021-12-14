#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
void create(struct node**head,int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node* ptr,*ptr1;
    if(*head==NULL)
    {
        *head=temp;
        ptr=temp;
        ptr1=temp;
    }
    else if(data>ptr->data)
    {
        ptr->next=temp;
        ptr=temp;
    }
   else if(data<ptr1->data)
    {
        temp->next=ptr1;
        ptr1=temp;
        *head=temp;
    }
    else{
        struct node* temp1=*head;
        while(temp1!=NULL)
        {
            if(temp1->data<data && temp1->next->data>data)
            {
                temp->next=temp1->next;
                temp1->next=temp;
                break;
            }
            temp1=temp1->next;
        }
    }
}
void print_node(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
void merge(struct node** head,struct node*ptr)
{
    struct node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
int main()
{
    struct node* head=NULL;
    struct node* ptr=NULL;
    struct node* temp;
    printf("creating first list\n enter no of elements of first list\n");
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int data;
        scanf("%d",&data);
        create(&head,data);
    }
    print_node(head);
     printf("\ncreating second list\n enter no of elements of second list\n");
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int data;
        scanf("%d",&data);
        create(&ptr,data);
    }
    print_node(ptr);
    merge(&head,ptr);
    print_node(head);
}

