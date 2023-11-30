#include stdio.h
#include stdlib.h
struct Node{
	int data;
	struct Node next;
};
int main(){
	int n,num;
	scanf(%d,&n);
	struct Node node,head=NULL,temp1,temp2,temp3,temp,h;
	for(int i=0;in;i++){
		node = (struct Node)malloc(sizeof(struct Node));
		scanf(%d,&num);
		node-data = num;
		node-next = NULL;
		if(head == NULL){
			head = temp = node;
			continue;
		}
		temp-next = node;
		temp = node; 
	}	
	temp1 = head;
	temp2 = temp1-next;
	if(temp2 != NULL){
    	temp3 = temp2-next;
    	while(1){
    	    if(temp1 == head){
    	        temp1-next = NULL;
    	    }
    	    temp2-next = temp1;
    	    temp1 = temp2;
    	    temp2 = temp3;
    	    if(temp2 != NULL){
    	        temp3 = temp2-next;
    	    }
    	    else{
    	        head = temp1;
    	        break;
    	    }
    	}
	}
	h = head;
	while(h != NULL){
	    printf(%d ,h-data);
	    h = h-next;
	}	
}
