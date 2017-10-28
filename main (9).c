#include <stdio.h>
#include <stdlib.h>
struct queue{
int data;
struct queue *next;

};
struct queue *top=NULL;

void createNode(int data){
struct queue * ptr;
ptr=(struct queue *)malloc(sizeof(struct queue));
if(top==NULL){
  top=ptr;
  top->data=data ;
  top->next=NULL;
}
else
    struct queue *temp;
    temp=top;
    while(temp->next !=NULL){
        temp=temp->next;
    }
 temp->next=ptr;
 ptr->data =data;
 ptr->next=NULL;
}

void delete(){




}


int main()
{
    printf("Hello world!\n");
    return 0;
}
