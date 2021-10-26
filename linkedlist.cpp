
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* first(struct node* head)
{
     struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL)
     {
         printf("no sufficient memory\n");
     }
     else{
         printf("enter data\n");
         int data;
         scanf("%d",&data);
         temp->data=data;
         temp->next=head;
         head=temp;
     }
     return head;
}
struct node* last(struct node* head)
{
     struct node *temp,*ptr;
     temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL)
     {
         printf("no sufficient memory\n");
     }
     else{
         printf("enter data\n");
         int data;
         scanf("%d",&data);
         temp->data=data;
         temp->next=NULL;
         while(ptr->next!=NULL)
         {
             ptr=ptr->next;
         }
         ptr->next=temp;
}
return head;
}
/*struct node* inter_pos(struct node* head,int pos)
{
    
}*/
struct node* make_list(struct node* head,int data)
{
      struct node* temp,*ptr;
      ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
      temp->data=data;
      temp->next=NULL;
      while(ptr->next!=NULL)
      {
          ptr=ptr->next;
      }
     ptr->next=temp;
     head=ptr;
     return head;
}
int search( struct node* head,int data)
{
     struct node* temp=head;
     int pos=1;
     while(temp!=NULL)
     {
         if(temp->data==data)
         {
             return pos;
         }
         else
         {
             pos++;
             temp=temp->next;
         }
     }
     return 0;
}
int main()
{
    struct node* head,*ptr,*temp;
    int n;
    printf("enter no. of nodes\n");
    scanf("%d",&n);
    int c=1;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("no sufficient memo\n");
    }
    else{
        int data;
         printf("enter data\n");
          scanf("%d",&data);
         head->data=data;
         head->next=NULL;
         ptr=head;
    }
    while(c<n)
    {
        int d;
        printf("enter data\n");
        scanf("%d",&d);
        head=make_list(head,d);
        c++;
    }
    printf("printing linked list brfore changes\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\nsearch\n");
    int val,pos;
    scanf("%d",&val);
    pos=search(head,val);

    printf("%d\n",pos);
  printf("enter your choice\n");
  printf("1. at start 2.end 3.at \n");
 int ch;
scanf("%d",&ch);
switch(ch)
{
  case 1: head=first(head);
ptr=head;
  break;
 case 2: head=last(head);
 break;
}
 while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

}
   
   
   
   
   
   
   
   
   
   
   



