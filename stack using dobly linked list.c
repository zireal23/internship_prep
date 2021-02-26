#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node *head,*mid;



int main(){
   struct node *s, *temp;
   int n;
   scanf("%d", &n);
   for (int i=1;i<=n;i++){
         s = (struct node*)malloc(sizeof(struct node));//reserving space for a node variable
         s->data = i; //inserting data into the linked list
         
         if(head==0){
           head = s;
           head->prev = NULL;
           } //pointing the global head pointer to the first node of the linked list
        else{
        temp->next = s;
        s->prev = temp;
        }

        temp = s;
        if(i==4){
           mid = s;
          
        }
    }temp->next = 0; //ending the linked list;
    
   
//    for(int i=0;i<n;i++){
//        printf("%d   ", temp->data);
//        temp = temp->prev;
//    }
}