#include<iostream>
using namespace std;
int Lonnhat(int a,int b){
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	return a;
}
int Nhonhat(int a,int b){
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	return b;
}
int BCNN(int a,int b){
	int i,x,y,z;
	for(i=1;i<=Lonnhat(a,b);i++){
		x=Lonnhat(a,b)*i;
		if(x%Nhonhat(a,b)==0){
			z=x/Nhonhat(a,b);
			y=Nhonhat(a,b)*z;
			break;
		}
		if(Lonnhat(a,b)%Nhonhat(a,b)==0){
			y=Lonnhat(a,b);
		}
	}
return y;
}
int UCLN(int a, int b){
	int j,box;
	for(j=1; j<=Lonnhat(a,b); j++){
		if(Lonnhat(a,b)%j==0){
			while(Nhonhat(a,b)%j==0){
			box=j;	
			j++;
			}	
		}
	}
	return box;
}
int main(){
	int a,b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" La: "<<UCLN(a,b)<<endl;
	cout<<"Boi chung nho nhat cua "<<a<<" va "<<b<<" La: "<<BCNN(a,b)<<endl;
}
