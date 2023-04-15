#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//Khai bao linklist
struct DSLK{
	int data;
	struct DSLK *next;
};
//Tao moi mot node
typedef struct DSLK *node;
node creatednode(int value){
	node temp;
	temp=(node)malloc(sizeof(struct DSLK));
	temp->next=NULL;
	temp->data=value;
	return temp;
}
//Them node vao dau 
node addhead(node head, int value){
	node temp=creatednode(value);
	if(head==NULL){
		head=temp;
	}
	else{
		temp->next=head;
		head=temp;
	}
	return head;
}
//Them vao cuoi
node addtail(node head, int value){
	node temp=creatednode(value);
	if(head==NULL){
		head=temp;
	}else{
		node p=head;
		while( p->next != NULL ){
			p=p->next;
		}
		p->next=temp;
	}
	return head;
}
//Them vao vi tri bat ki
node addat(node head, int value, int position){
	if( position==0 || head==NULL ){
		head=addhead(head,value);
	}else{
		int k=1;
		node p=head;
		while( p != NULL && k!=position){
			p=p->next;
			++k;
		}
		if(k != position){
			head=addtail(head,value);
		}else{
			node temp=creatednode(value);
			temp->next=p->next;
			p->next=temp;
		}
	}
	return head;
}
//Xoa node dau
node delnode(node head){
	if(head==NULL){
		printf("\nCha co gia de xoa het.");
	}else{
		head=head->next;
	}
	return head;
}
//Xoa node cuoi
node deltail(node head){
	if(head==NULL || head->next==NULL){
		return delnode(head);
	}
	node p=head;
	while(p->next->next != NULL ){
		p=p->next;
	}
	p->next=p->next->next;
	return head;
}
//Xoa o vi tri bat ki
node delat(node head, int position){
	if(position==0 || head==NULL || head->next==NULL){
		head=delnode(head);
	}
	else{
		node p=head;
		int k=1;
		while(p->next->next!=NULL && k!=position){
			p=p->next;
			++k;
		}
		if(k!=position){
			head=deltail(head);
		}else{
			p->next=p->next->next;
		}
	}
	return head;
}
//Lay gia tri o vi tri bat ki
int get(node head, int index){
	node p=head;
	int k=0;
	while(p->next!=NULL && k!=index){
		++k;
		p=p->next;
	}
	return p->data;
}
//Tim kiem trong danh sach lien ket
int search(node head, int value){
	int position=0;
	for( node p=head; p!=NULL; p=p->next){
		if(p->data==value){
			return position;
		}
		position++;
	}
	return -1;
}
//Xoa tat ca cac node trong co gia tri  chi dinh 
node delvalue(node head, int value){
	int position=search(head,value);
	while(position != -1){
		delat(head,position);
		position=search(head,value);
	}
	return head;
}
//Duyet DSLK
void Traverser(node head){
	printf("\n");
	for(node p=head; p != NULL; p=p->next){
		printf("%5d",p->data);
	}
}
//----------------Mot so ham bo tro khac
//Ham khoi tao node head
node inithead(){
	node head;
	head=NULL;
	return head;
}
//Ham lay so phan tu cua DSLK
int count(node head){
	int length=0;
	for(node p=head; p!=NULL; p=p->next){
		length++;
	}
	return length;
}
//add node
node Input(){
	node head=inithead();
	int value, n;
	do{
		printf("Nhap so luong phan tu n: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0; i<n; i++){
		printf("Nhap gia tri can them: ");
		scanf("%d",&value);
		head=addtail(head,value);
	}
	return head;
}
int main(){
	printf("\nTao mot danh sach lien ket\n");
	node head=Input();
	Traverser(head);
	
	 printf("\n==Thu them 1 phan tu vao linked list==");
    head = addat(head, 100, 2);
    Traverser(head);
 
    printf("\n==Thu xoa 1 phan tu khoi linked list==");
    head = delat(head,2);
    Traverser(head);
 
    printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    int index = search(head, 5);
    printf("\nTim thay tai chi so %d", index);
 
    printf("\nBan co the thu them nhe!");
}
