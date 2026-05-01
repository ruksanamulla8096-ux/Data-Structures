#include<stdio.h>
#include<stdlib.h>
int main()
do{
	new = (struct node*)malloc(size of (struct node));
	printf("Enter a value: ");
	scanf("%d",&value);
	new -> data = value;
	new -> next = NULL;
	if(head == NULL){
		head = new;
		temp = new;
	}
	else{
		temp -> next = new;
		temp -> temp -> next;
	}
	printf("Do you want to add one more to the node to the list (y/n)");
	scanf(" %d",&ch);
}while(ch == 'y');