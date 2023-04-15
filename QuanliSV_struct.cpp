#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
//Khoi tao cau truc sinh vien
struct sinhvien{
	int maSV;
	char tenSV[20];
	char lop[20];
	float diemTK;
	char hanhkiem[20];
};
typedef struct sinhvien SV;
struct node{
	SV data;
	struct node *next;
};
typedef struct node NODE;
struct list{
	NODE *phead;
	NODE *ptail;
};
typedef struct list LIST;
//Khoi tao ds
void Khoitao(LIST &ds){
	ds.phead=NULL;
	ds.ptail=NULL;
}
//Khoi tao node
NODE *creatednode( SV x ){
	NODE *temp;
	temp=new NODE;
	if( temp == NULL ){
		cout<<"Khong du bo nho.";
		return NULL;
	}
	temp->data=x;
	temp->next=NULL;
	return temp;
}
//Kiem tra rong
int Kiemtra(LIST ds){
	if(ds.phead==NULL){
		return 1;
	}
	return 0;
}
//Them phan tu vao dau ds
void addhead( LIST &ds, NODE *p){
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}else{
		p->next=ds.phead;
		ds.phead=p;
	}
}
//Them phan tu vao cuoi ds
void addtail(LIST &ds, NODE *p){
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}
	else{
		ds.ptail->next=p;
		ds.ptail=p;
	}
}
//Tim kiem phan tu trong danh sach
NODE *Timkiem(LIST &ds, NODE *x){
	NODE *p=new NODE;
	p=ds.phead;
	while((p != NULL)&&(p->data.maSV != x->data.maSV)){
		p=p->next;
	}
	return p;
}
//Xoa pt cuoi cung khoi ds
void deltail(LIST &ds){
	NODE *k=new NODE;
	for(k=ds.phead; k!=NULL; k=k->next){
		if(k->next==ds.ptail){
			delete ds.ptail;
			k->next=NULL;
			ds.ptail=k;
		}
	}
}
//Liet kê ra màn hinh danh sách tat ca nhung Sinh viên thuoc lop “D13CNPM”.
void Lietke(LIST &ds){
	NODE *p=new NODE;
	for(p=ds.phead; p!=NULL; p=p->next){
		if(strcmp(p->data.lop,"D13CNPM")==0){
			printf("%d\t %s\t %s\t %f\t %s\t \n",p->data.maSV,p->data.tenSV,p->data.lop,p->data.diemTK,p->data.hanhkiem);
		}
	}
}
//Nhap vao ds
void Nhap(LIST &ds, int n){
	cout<<"Nhap thong  tin sinh vien\n.";
	for(int i=0; i<n; i++){
		SV s;
		printf("Nhap ma sinh vien : ");fflush(stdin);//Xoa bo dem an
        scanf("%d",&s.maSV);
        printf ("Nhap ten sinh vien : ");fflush(stdin);
        gets(s.tenSV);
        printf("Nhap lop : ");fflush(stdin);
        gets(s.lop);
        printf("Nhap diem tong ket : ");fflush(stdin);
        scanf("%f",&s.diemTK);
		printf("Nhap hanh kiem: ");fflush(stdin);
		gets(s.hanhkiem);
		cout<<endl;
		cout<<endl;
		//khoi tao vung nho 
		NODE *p=new NODE;
		//khoi tao node chua du lieu tra ve
		p=creatednode(s);
		addtail(ds,p);
	}
}
//Xuat ds
void Xuat(LIST ds){
	for(NODE *p=ds.phead; p!=NULL; p=p->next){
		printf("%d\t %s\t %s\t %f\t %s\n", p->data.maSV, p->data.tenSV, p->data.lop, p->data.diemTK, p->data.hanhkiem);
	}
}
//Sap xep DSSV tang dan
void Sapxep(LIST &ds){
	NODE *p,*q;
	for(p=ds.phead; p!=ds.ptail; p=p->next){
		for(q=p->next; q!=NULL; q=q->next){
			if(p->data.maSV > q->data.maSV){
				SV ab = p->data;
				p->data = q->data;
				q->data = ab;
			}
		}
	}
	Xuat(ds);
}
int main(){
	LIST ds;
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	Khoitao(ds);
	Nhap(ds,n);
	cout<<"\nDanh Sach Sinh Vien\n";
	Xuat(ds);
	printf("\nSap xep danh sach theo maSV tang dan: \n");
	Sapxep(ds);
	printf("\nDanh sach sinh vien thuoc lop D13CNPM: \n");
	Lietke(ds);
	cout<<"\nDanh Sach Sinh Vien Da Xoa Cuoi\n";
	deltail(ds);
	Xuat(ds);
	
	//-------------------------------------------------------
	NODE *x= new NODE;
	printf("Nhap vao maSV can tim: ");fflush(stdin);
	scanf("%d",&x->data.maSV);
	if(Timkiem(ds,x)==NULL){
		cout<<"Khong tim thay phan tu can tim.";
	}
	else{
		cout<<"tim thay pt can tim.";
	}
}
