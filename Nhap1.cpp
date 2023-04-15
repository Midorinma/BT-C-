#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
struct list{
	NODE *phead;
	NODE *ptail;
};
typedef struct list LIST;

NODE *Taonode(int x){
	NODE *temp=new NODE;
	if( temp == NULL ){
		cout<<"Bo nho day!";
		return NULL;
	}
	temp->data = x;
	temp->next = NULL;
	return temp;
}
//ham khoi tao
void Khoitao(LIST &ds){
	ds.phead = NULL;
	ds.ptail = NULL;
}
//Ham kiem tra rong
int Kiemtra(LIST ds){
	if(ds.phead==NULL){
		return 0;
	}
	return 1;
}
//Ham them dau
void addhead(LIST &ds, NODE *p){
	if( ds.phead == NULL ){
		ds.phead = p;
		ds.ptail = p;
	}else{
		p->next = ds.phead;
		ds.phead = p;
	}
}
//Ham them duoi
void addtail(LIST &ds,NODE *p){
	if(ds.phead == NULL){
		ds.phead = p;
		ds.ptail = p;
	}else{
		ds.ptail->next = p;
		ds.ptail = p;
	}
}
//Ham them o vi tri bat ki
void addmid(LIST &ds,NODE *q, NODE *p, int position, int value){
	if( position==0 || ds.phead == NULL){
		addhead(ds,p);
	}
	else{
		int k=1;
		while( ( p != NULL ) && ( k != position ) ){
			p = p->next;
			++k;
		}
		if( k != position ){
			addtail(ds,p);
		}else{
			q=Taonode(value);
			q->next = p->next;
			p->next=q;
		}
	}
}
//Xoa dau
void delhead(LIST &ds){
	NODE *p=new NODE;
	p->next = ds.phead;
	ds.phead = ds.phead->next;
	p->next = NULL;
	delete p;
}
//Xoa cuoi
void deltail(LIST &ds){
	NODE *k=new NODE;
	for( k=ds.phead; k!=NULL; k=k->next){
		if(k->next == ds.ptail){
			delete ds.ptail;
			k->next=NULL;
			ds.ptail=k;
		}
	}
}
//Xoa o vi tri bat ki
void Xoamid(LIST &ds, int value){
	NODE *p=new NODE;
	if(ds.phead->data==value){
		delhead(ds);
		return;
	}
	if(ds.ptail->data==value){
		deltail(ds);
		return;
	}
	else{
		NODE *k=new NODE;
		for(k=ds.phead; k!=NULL; k=k->next){
			if(k->data==value){
				//gan con tro next cua node p bang con tro next cua node k
				p->next=k->next;
				//xoa di node k
				delete k;
				//ket thuc ham
				return;
			}
			//gan p=k de cho thay rang p dung truoc k
			p=k;
		}
	}
}
//Nhap dslk
void Nhap(LIST &ds, int n){
	for(int i=0; i<n; i++){
		int x;
		cout<<i<<": ";cin>>x;
		NODE *p=new NODE;
		p=Taonode(x);
		addtail(ds,p);
	}
}
void Xuat(LIST ds){
	NODE *p=new NODE;
	for( p=ds.phead; p!=NULL; p=p->next){
		cout<<" "<<p->data<<" , ";
	}
}
//
int main(){
	LIST ds;
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	Khoitao(ds);
	Nhap(ds,n);
	cout<<"DS lien ket co dang\n";
	Xuat(ds);

	//Them 1 diem bat ki
	int giatri,vitri;
	cout<<"\nNhap vao gia tri can them: ";cin>>giatri;
	cout<<"\nNhap vao vi tri can them: ";cin>>vitri;
	NODE *q=new NODE;
	NODE *p=new NODE;
	p=Taonode(5);
	addmid(ds,q,p, vitri, giatri);
	Xuat(ds);
	
}
