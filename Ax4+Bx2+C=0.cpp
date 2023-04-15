#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	float a,b,c,x1,x2,x3,t1,t2,t3,delta;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	cout<<"Nhap c: ";cin>>c;
	if(a==0){
		cout<<"Nhap sai.dieu kien a!=0";
		return 0;
	}
	delta=pow(b,2)-4*a*c;
	t1=((-b)+sqrt(delta))/2*a;
	t2=((-b)-sqrt(delta))/2*a;
	x1=sqrt(t1);
	x2=sqrt(t2);
	t3=(-b)/(2*a);
	x3=sqrt(t3);
	cout<<"------------------------------\n";
	cout<<"Delta = "<<delta<<endl;
	
	if(delta>0){
		cout<<"Phuong trinh ton tai hai nghiem :\n";
		cout<<"t1 = "<<t1<<"\t"<<"t2 = "<<t2<<endl;
		if(t1>=0 && t2>=0){
		cout<<"The t1 & t2 vao x ta duoc"<<endl;
		cout<<"Phuong trung trung phuong Ax4+Bx2+C=0 :"<<endl;
		cout<<"x1= "<<x1<<"\t"<<"x2= "<<x2<<endl;
		}
		else{
			cout<<"Khong thoa DIEU KIEN t>=0 phuong trinh khong co nghiem x";
		}
		
	}
	else{
		cout<<"Phuong trinh vo nghiem.";
	}
	if(delta==0){
		cout<<"Phuong trinh co nghiem kep :\n";
		cout<<setw(3)<<"t1 = t2 = "<<t3<<endl;
		cout<<endl;
		if(t1>=0 && t2>=0){
		cout<<"The t1 & t2 vao x ta duoc"<<endl;
		cout<<"Phuong trung trung phuong Ax4+Bx2+C=0 :"<<endl;
		cout<<setw(3)<<"x1 = x2 = "<<x3<<endl;
		}
		else{
			cout<<"Khong thoa DIEU KIEN t>=0 phuong trinh khong co nghiem x";
		}
	}	
	
	
	
}
