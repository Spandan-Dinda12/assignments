/*wacp to perform the following operations in a SLL
add at begin
append
add after
display
count
delete
reverse print
reverse list
searching
sorting
exit*/

#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *next;
};

struct node *head=NULL;


void add_at_begin();
void append();
void add_after();
void display();
int count();
void delete();
void reverse_print();
void reverse_list();
void searching();
void sorting();
void exit();

void add_at_begin()
{
    struct  node *nw;
    nw= (struct node *)malloc(sizeof(struct node));
    if (nw==NULL) 
    printf("\n New node allocation failed");
    return;

    printf("\n Enter Data:");
    scanf("%d" ,&nw->data);
    nw->next=head;
    head=nw;
    printf("\nNode added successfully.");
}

void append()
{
    struct  node *nw, *temp;
    nw= (struct node *)malloc(sizeof(struct node));
    if (nw==NULL) 
    printf("\n New node allocation failed");
    return;

    printf("\n Enter Data:");
    scanf("%d" ,&nw->data);
    nw->next=NULL;
    if (head=NULL)
    {
        head=nw;
    }
    else{
        temp=head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next=nw;
    }
    printf("\n Node appended successfully.");
}

void add_after()
{
    struct  node *nw, *temp;
    int value;
    nw= (struct node *)malloc(sizeof(struct node));
    if (nw==NULL) 
    printf("\n New node allocation failed");
    return;

    printf("\nEnter value after which you want to insert: ");
    scanf("%d", &value);

    temp = head;

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nValue not found!");
        return;
    }
    nw = (struct node *)malloc(sizeof(struct node));
    if (nw == NULL) {
        printf("\nMemory allocation failed!");
        return;
    }
    printf("\nEnter data: ");
    scanf("%d", &nw->data);

    nw->next = temp->next;
    temp->next = nw;

    printf("\nNode added successfully.");
}

void display()
{
    struct  node *temp;
    
    if (temp==NULL) 
    printf("\n No node available");
    return;

    printf("\n Enter Data:");
    scanf("%d" ,&nw->data);
    nw->next=head;
    head=nw;
    printf("\nNode added successfully.");
}



void main(){
    printf("\n Implementation of a SLL: ");
    while(1){
     printf("\n Add at Begin: \n Append: \n Add after: \n Display:  \n Count: \n Delete: \n Reverse Print: \n Reverse List: \n Searching: \n Sorting: ");
    printf("\n Enter your choice: ");
    int choice;
    scanf("%d" , &choice);

    switch (choice)
    {
      case 1: printf("\n Add at Begin:");
              add_at_begin();
              break;
      case 2: printf("\n Append:");
              append();
              break;
      case 3: printf("\n Add after:");
              add_after();
              break;
      case 4: printf("\n Display:");
              display();
              break;
      case 5: printf("\n Count:");
              int c= count();
              printf("\n No of nodes: %d", c);
              break; 
      case 6: printf("\n Delete:");
             delete();
              break; 
      case 7: printf("\n Reverse print:");
              reverse_print();
              break;
      case 8: printf("\n Reverse list:");
              reverse_list();
              break;
      case 9: printf("\n Searching:");
              searching();
              break;
      case 10: printf("\n Sorting:");
              sorting();
              break;
      case 11: exit(0);
      default: prinf("\n Invalid choice, try again nigg:( ");
    }

} 

}

