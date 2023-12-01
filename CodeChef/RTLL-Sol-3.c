// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *th;

void reverse(struct Node *prev,struct Node *curr){
    if(curr->next != NULL){
        th = curr->next;
        reverse(curr,curr->next);
    }
    curr->next = prev;
}

int main() {
    // Write C code here
    
    int n,num;
    printf("Enter a number : ");
    scanf("%d",&n);
    struct Node *head,*node,*temp,*h,*h1,*temph;
    for(int i=0;i<n;i++){
        node = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&num);
        node->data = num;
        if(head == NULL){
            head = node;
        }
        else{
            temp->next = node;
        }
        temp = node;
    }

    reverse(head,head->next);
    head->next = NULL; 
    
    h1 = th;
    while(h1 != NULL){
        printf("%d ",h1->data);
        h1 = h1->next;
    }
    return 0;
}