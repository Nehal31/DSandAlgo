#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
	int data;
	struct node *next;
}node; 

void display(node *head){
	node *temp = head;
	if(temp == NULL)
		printf("Link is emply!!!\n");
	else{
		printf("Link List Data : ");
		while(temp){
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}

node* get_node(int data){
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	return temp; 
}

void add_node_last(node **head, int data){
	if(*head == NULL){
		*head = get_node(data);
	}
	else{
		node *temp = *head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = get_node(data);
	}
}

void add_node_first(node **head, int data){
	if(*head == NULL){
		*head = get_node(data);
	}
	else{
		node *temp = *head;
		*head = get_node(data);
		(*head)->next = temp;
	}
}

void start(node **head){
	*head = NULL;
}

void empty_list(node *head){
	if( head != NULL ){
		empty_list(head->next);
		printf("Freeing item : %d \n",head->data);
		free(head);
	}
}

void delete_first(node **head){
	if( *head == NULL){
		printf("No Element to delete\n");
	}
	else{
		node *temp = *head;
		*head = temp->next;
		printf("Deleting First item : %d \n",temp->data);
		free(temp);
	}
}

void delete_last(node **head){
	if( *head == NULL){
		printf("No Element to delete\n");
	}
	else if( (*head)->next == NULL){
		printf("Deleting Last item : %d \n",(*head)->data);
		free(*head);
		*head = NULL;
	}
	else{
		node *temp = *head;
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		printf("Deleting item from last : %d \n",temp->next->data);
		free(temp->next);
		temp->next = NULL;
	}
}

void delete_mid(node **head){
	if( *head == NULL){
		printf("No Element to delete\n");
	}
	else if( (*head)->next == NULL){
		printf("Deleting last mid item : %d \n",(*head)->data);
		free(*head);
		*head = NULL;
	}
	else{
		node *temp1 = *head;
		node *temp2 = (*head)->next;
		while( temp2->next != NULL && temp2->next->next != NULL ){
			temp1 = temp1->next;
			temp2 = temp2->next->next;
		}		
		printf("Deleting item from mid : %d \n",temp1->next->data);
		node *tt = temp1->next->next;
		free(temp1->next);
		temp1->next = tt;
	}
}

int main(){
	node *head;
	start(&head);
	display(head);
	add_node_last(&head, 10);
	display(head);
	add_node_last(&head, 12);
	display(head);
	add_node_first(&head, 72);
	display(head);
	add_node_first(&head, 92);
	display(head);
	//empty_list(head);
	//delete_first(&head);
	display(head);
	delete_mid(&head);
	display(head);
	delete_mid(&head);
	display(head);
	delete_mid(&head);
	display(head);
	delete_mid(&head);
	display(head);
	delete_mid(&head);
	display(head);
	
	return 0;
} 
