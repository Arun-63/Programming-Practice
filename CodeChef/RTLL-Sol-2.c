// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *h1,*head=NULL,*s[10],*temp1;
int top = -1;

void push(struct Node *node){
    s[++top] = node;
}

struct Node* pop(){
    if(top != -1)
        return s[top--];
}

int isempty(){
    if(top == -1) return 1;
    return 0;
    
}

int main() {
    // Write C code here
    printf("Hello world\n");
    int n,num;
    printf("Enter a number : ");
    scanf("%d",&n);
    struct Node *node,*temp,*h,*h1,*temph;
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
    h = head;
    while(h != NULL){
        push(h);
        temph = h;
        h = h -> next;
    }
    
    while(!isempty()){
        temp = pop();
        if(!isempty())
            temp->next = s[top];
        else
            temp->next = NULL;
    }
    
    h1 = temph;
    while(h1 != NULL){
        printf("%d ",h1->data);
        h1 = h1->next;
    }
    return 0;
}