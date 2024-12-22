#include <stdio.h>
#include <stdlib.h>
 typedef struct node  {
	int info;
	struct node* next;
}Node;
typedef  Node* NodePtr;
NodePtr get_node() {
	NodePtr p;
	p = (NodePtr)malloc(sizeof(Node));
	if (p == NULL) {
		printf("error");
		exit(1);
	}
	else {
		return p;
	}
}
NodePtr insert_head(NodePtr p,int data){
	NodePtr q;
	q = get_node();
	q->info = data;
	if (p == NULL) {
		q->next = NULL;
	}
	else {
		q->next = p;
	}
	p = q;
	return p;
}
int main() {
	NodePtr list= NULL;
	list=insert_head(list, 5);
	list=insert_head(list, 6);
	NodePtr q;
	q = list;
	printf("list->");
	while (q != NULL) {
		printf("%d->", q->info);
		q = q->next;
	}
	printf("null");
	return 0;
}







