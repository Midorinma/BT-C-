#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//Cau truc du lieu cua DSLK don
struct node{
	int x;
	int i;
	struct node *next;
};
typedef struct node NODE;
struct list{
	NODE *phead;
	NODE *ptail;
};
typedef struct list LIST;
//Khoi tao
void Khoitao(LIST &ds){
	ds.phead=NULL;
	ds.ptail=NULL;
}
//Tao NODE
NODE *creatednode(int x, int i){
	NODE *temp=new NODE;
	if(temp==NULL){
		cout<<"Khong du bo nho!";
		return NULL;
	}
	temp->next=	NULL;
	temp->x=x;
	temp->i=i;
	return temp;
}
//Them node vao ds.ptail
void addtail(LIST &ds, int x, int i){
	NODE *p=creatednode(x,i);
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}else{
		ds.ptail->next=p;
		ds.ptail=p;
	}
}

int main(){
	LIST ds;
	
}
