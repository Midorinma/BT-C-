#include<iostream>
#include<stdlib.h>
#include<stdio.h>
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
//ham tao node
NODE *creatednode(int value){
	NODE *temp;
	temp=new NODE;
	if( temp == NULL ){
		cout<<"Khong du bo nho!";
		return NULL;
	}
	temp->next=NULL;
	temp->data=value;
	return temp;
}
//Khoi tao
void Khoitao(LIST &ds){
	ds.phead=NULL;
	ds.ptail=NULL;
}
//Kiem tra rong
int Kiemtra(LIST ds){
	if(ds.phead==NULL){
		return 0;
	}
	return 1;
}
//Them node vao dau
void addhead( LIST &ds, NODE *p){
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}else{
		p->next=ds.phead;
		ds.phead=p;
	}
}
//Them node vao sau
void addtail(LIST &ds, NODE *p){
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}else{
		ds.ptail->next=p;
		ds.ptail=p;
	}
}
//Nhap mot node
void Nhap(LIST &ds, int  n){
	cout<<"Node:"<<endl;
	for(int i=0; i<n; i++){
		int x;
		cout<<i<<" : ";cin>>x;
		NODE *p=new NODE;
		p=creatednode(x);
		addtail(ds,p);
	}
}
//Xuat node
void Xuat(LIST ds){
	NODE *p=new NODE;
	cout<<"head-> ";
	for(p=ds.phead; p!=NULL; p=p->next){
		cout<<p->data<<" -> ";
	}
	cout<<"tail";
}
//Tong cac node
int Sum(LIST &ds){
	NODE *p=new NODE;
	int tong=0;
	for(p=ds.phead; p!=NULL; p=p->next){
		tong+=p->data;
	}
	return tong;
}
int main(){
	LIST ds;//Khai bao thuc the ds
	Khoitao(ds);
	int n;
	cout<<"Nhap n= ";cin>>n;
	Nhap( ds, n );
	cout<<"Danh sach lien ket don cac so nguyen: \n";
	Xuat(ds);
	int sum=Sum(ds);
	cout<<"\nSum node: "<<sum;
	return 0;
}
