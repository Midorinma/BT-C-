#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//1. Khai bao link list
struct Node{
	int data;
	struct Node *next;
};
//2. Khai bao mot cau truc dslk don
typedef struct Node NODE;
struct list{
	//Thanh phan dau danh sach
	NODE *phead;
	//Thanh phan cuoi danh sach
	NODE *ptail;
};
typedef struct list LIST;
//3. Tao moi mot node
NODE* creatednode(int x){
	//Tao mot node temp moi
	NODE *temp;
	//cap phat vung nho cho node chua data va contro
	temp=new NODE;
	//Neu temp== NULL thi khong du bo nho
	if(temp==NULL){
		cout<<"Khong du bo nho.";
		return NULL;
	}
	//gan con tro next==NULL
	temp->next=NULL;
	//gan thanh phan data=x
	temp->data=x;
	return temp;
}
//4.Ham khoi tao DSLK don
void Khoitao(LIST &ds){
	//dat dia chi dau ds bang null
	ds.phead=NULL;
	//dat dia chi sau ds bang null
	ds.ptail=NULL;
}
//5.Ham kiem tra rong DSLK don
int KTrong(LIST ds){
	if(ds.phead==NULL){
		return 1;
	}
	return 0;
}
//6. Them node vao dau ds
void addhead(LIST &ds, NODE *p){
	//Neu ds rong phead && ptail la NULL
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}
	//nguoc lai cho con tro cua p tro toi pt dau tien cua DSLK
	else{
		p->next=ds.phead;
		//gan phead cho pt dau
		ds.phead=p;
	}	
}
//7. Them node vao cuoi ds
void addtail(LIST &ds, NODE *p){
	//neu phead & ptail la NULL
	if(ds.phead==NULL){
		ds.phead=p;
		ds.ptail=p;
	}
	else{
		//cho contro cua ptail tro den node p
		ds.ptail->next=p;
		//gan ptail co node p
		ds.ptail=p;
	}
}
//8. Them node vao giua danh sach
void addmid(LIST &ds, NODE *q, NODE *p, int position, int value){
	if(position==0 || ds.phead==NULL){
		addhead(ds,p);
	}
	else{
		int k=1;
		p=ds.phead;
		while((p!=NULL)&&(k!=position)){
			p=p->next;
			++k;
		}
		if(k!=position){
			addtail(ds,p);
		}
		else{
			
			q=creatednode(value);
			q->next=p->next;
			p->next=q;
		}
	}
}
//9. Nhap node
void Nhap(LIST &ds, int n){
	int x;
	for(int i=0; i<n ; i++){
		cout<<"Nhap x= ";
		cin>>x;
		NODE *p=new NODE;
		p=creatednode(x);
		addtail(ds,p);
	}
}
//10. Xuat node
void Xuat(LIST ds){
	//Khoi tao mot node
	NODE *p=new NODE;
	//duyet tu dau ds den cuoi ds voi dieu kien p!=NULL
	for(p=ds.phead; p!=NULL; p=p->next){
		//hien thi du lieu cua tung node
		cout<<p->data<<" , ";
	}
}
//11. Tim kiem
NODE *Timkiem(LIST ds, int x){
	NODE *p=new NODE;
	p=ds.phead;
	while((p != NULL) && (p->data != x)){
		p=p->next;
	}
	return p;
}
//12. Xoa dau
void Xoadau(LIST &ds){
	NODE *p=new NODE;
	//gan node p cho ds.head
	p=ds.phead;
	//cho phead tro den node dau tien
	ds.phead=ds.phead->next;
	//cho node p moi dc gan head tro den null
	p->next=NULL;
	//xoa p di
	delete p;
}
//13. Xoa cuoi
void Xoacuoi(LIST &ds){
	NODE *k=new NODE;
	for(k=ds.phead; k!=NULL; k=k->next){
		if(k->next == ds.ptail){
			delete ds.ptail;
			k->next=NULL;
			ds.ptail=k;
		}
	}
}
//14. Xoa pt bat ki
void Xoamid(LIST &ds, int value){
	NODE *p=new NODE;
	if(ds.phead->data==value){
		Xoadau(ds);
		return;
	}
	if(ds.ptail->data==value){
		Xoacuoi(ds);
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
//HUY TOAN BO DSLK 
void HuyDS(LIST &ds){
	NODE *k=new NODE;
	for(k=ds.phead; k!=NULL; k=k->next){
		NODE *p=ds.phead;
		ds.phead=p->next;
		delete p;
	}
	ds.ptail=NULL;
}
void DaonguocDS(LIST &ds){
	NODE *p=ds.phead;
	NODE *next=NULL;
	NODE *pre=NULL;
	while(p!=NULL){
		
		pre=p->next;
		p->next=next;
		next=p;//hoan doi con tro p->next
		p=pre;//hoan doi con tro tro den next theo chieu nguoc lai
	}
	ds.phead=next;
}
int main(){
	//Khai bao mot danh sach
	LIST ds;
	int n;
	cout<<"Nhap n= ";
	cin>>n;
	//Khoi tao ds
	Khoitao(ds);
	//goi ham nhap va truyen ds so luong phan tu n vao
	Nhap(ds,n);
	//goi ham xuat du lieu
	cout<<"\nDU LIEU TRONG DSLK DON\n";
	Xuat(ds);
	//Kt ds co rong hay khong
	KTrong(ds);
	//Khai bao du lieu cua node
	int x=10;
	//Khoi tao vung nho node truy cap boi dia chi p
	NODE *p=new NODE;
	//Tao node p co du lieu la x
	p=creatednode(x);
	addhead(ds,p);
	cout<<"\nthem node vao dau ds\n";
	Xuat(ds);
	//--------------------------------------------------
	int y=15;
	p=creatednode(y);
	addtail(ds,p);
	cout<<"\nThem node vao cuoi ds\n";
	Xuat(ds);
	//---------------------------------------------------
	int position,value;
	cout<<"\nNhap gia tri them: ";cin>>value;
	cout<<"\nNhap vi tri them: ";cin>>position;
	NODE *q=new NODE;
	addmid(ds,q,p,position,value);
	Xuat(ds);
	//---------------------------------------------------
    int s;
    cout<<"\nNhap vao gia tri can tim: ";
    cin>>s;
    //Goi ham tim kiem va truyen ds, x vao ham de tra ve kq p
    p=Timkiem(ds,s);
    if(p==NULL){
    	cout<<"khong tim thay "<<s;
	}
	else{
		
		cout<<"Tim thay "<<s;
	}
	
	//-------------------------------------------------
	Xoadau(ds);
	cout<<"\nDS sau khi da xoa dau:\n";
	Xuat(ds);
	//-------------------------------------------------
	Xoacuoi(ds);
	cout<<"\nDS sau khi da xoa cuoi:\n";
	Xuat(ds);
	//------------------------------------------------
	int gt;
	cout<<"\nNhap vao gia tri can xoa: ";cin>>gt;
	Xoamid(ds,gt);
	cout<<"\nDS sau khi da xoa: \n";
	Xuat(ds);
	//-------------------------------------------
	cout<<"\nDS sau khi dao nguoc la:";
	DaonguocDS(ds);
	Xuat(ds);
	
}
