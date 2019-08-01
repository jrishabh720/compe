#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
	
};
struct Node *start = NULL;
struct Node *createlist(struct Node *start, int data){
		struct Node *node = (struct Node*)malloc(sizeof(struct Node));
		node->data = data;
		node->next = NULL;
		node->prev = NULL;
		start=node;
	return start;
}

struct Node *insertatbeg(struct Node *start, int data){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *ptr;
	node->data = data;
	node->prev = NULL;
	node->next = start;
	start = node;
	ptr=start;
	return start;
}

struct Node *insertatend(struct Node *start, int data){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
	struct Node *ptr, *temp;
	temp = start;
	ptr = start;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next = node;
	node->prev = ptr;
	
	return start;
}
struct Node *insertatmid1(struct Node* start, int data, int pos_data){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	struct Node *ptr,*temp;
	ptr = start;
	temp = start;
	while(ptr->data != pos_data){
		ptr = ptr->next;
	}
	ptr->next->prev = node;
	node->next = ptr->next;
	ptr->next = node;
	node->prev = ptr;
	return start;
}
struct Node *insertatmid2(struct Node* start, int data, int pos_data){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	struct Node *ptr, *temp;
	ptr = start;
	temp = start;
	
	while(ptr->data != pos_data){
		temp = ptr;
		ptr = ptr->next;
	}
	node->next = ptr;
	temp->next = node;
	ptr->prev = node;
	node->prev = temp;
	return start;
}

struct Node *display(struct Node* start){
	struct Node *ptr;
	ptr = start;

	while(ptr != NULL){
		cout<<ptr->data<<"   ";
		ptr = ptr->next;
		
	}
	return start;
}

struct Node *delbeg(struct Node *start){
	struct Node *ptr;
	ptr=start;
	start = start->next;
	start->prev = NULL;
	free(ptr);
	return start;
}
struct Node *delend(struct Node *start){
	struct Node *ptr;
	ptr=start;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->prev->next = NULL;
	free(ptr);
	return start;
}

struct Node *delmid1(struct Node *start,int pos_data){
	struct Node *ptr, *temp;
	ptr=start;
	while(temp->data != pos_data){
		temp=ptr;
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr->next->prev = temp;
	free(ptr);
	return start;
}
struct Node *delmid2(struct Node *start,int pos_data){
	struct Node *ptr, *temp;
	ptr=start;
	while(temp->data != pos_data){
		ptr = ptr->next;
		temp=ptr;
	}
	temp->prev->next = ptr;
	ptr->next->prev = temp;
	free(ptr);
	return start;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	start = createlist(start,23);
    start = insertatbeg(start,34);
    start = insertatend(start, 78);
    start = insertatend(start, 48);
    start = insertatend(start, 38);
    start = insertatend(start, 88);
    start = insertatmid1(start, 67, 48);
    start = insertatmid2(start, 32, 38);

	start = delbeg(start);
	start = delend(start);
	start = display(start);
	    
    
    return 0;
}

