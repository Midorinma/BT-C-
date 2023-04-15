#include<iostream>

using namespace std;

int main(){
	
	int dem=0,i,j,n;
	double sum=0,TBC;
	cout<<"Nhap n= ";cin>>n;
	double *doublePtr=new double[n];//cap pha vung nho cho n co kieu double duoc su dung boi dia chi con tro *Ptr
	for(i=0; i<n; i++){//nhap so phan tu trong mang
		cout<<"Phan tu "<<i+1<<" : ";
		cin>>*(doublePtr+i);
	}
	for(int i=0; i<n; i++){//tinh Trung binh cong
		sum+=*(doublePtr+i);
		dem++;
	}
	TBC=sum/dem;
	cout<<"Trung binh cong cac gia tri trong mang: "<<TBC<<endl;
	delete []doublePtr;
	for( j=0; j<3; j++){
		cout<<"Dia chi "<<(doublePtr+j)<<endl;
		cout<<"Gia tri "<<*(doublePtr+j)<<endl;
	}
	
	return 0;	
}
