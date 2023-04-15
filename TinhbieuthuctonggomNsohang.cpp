#include<iostream>
using namespace std;
int TongS1(int n){
	int S1=0;
	int i;
	for(i=1; i<=n ;i++){
		S1+=i;
	}
	return S1;
}
int TongS2(int n){
	int i,b,x;
	int a=1;
	int S2=0;
	for(i=1; i<n; i++){
		b=a+1;
		x=a-b;
		a+=2;
		S2+=x;
		if(a==n){
			b=0;
			x=a;
			S2+=x;
			break;
		}
		if(b==n){
			break;
		}	
	}
	return S2;
}
int TongS3(int n){
	int S3=0;
	int x;
	for( int i=0; i<n; i++ ){
		for(int j=1; j<n+1;j++){
			x=i+j;
			S3+=x;
			i++;
		}
	}
	return S3;
}
int TongS4(int n){
	int S4=1;
	int i,j;
	if(n==1){
			cout<<S4;
			return 0;
		}
	else{
		for( i=1; i<n;i++ ){
			do{
				j=i*2;
				S4+=j;
				i=i+1;
				}while(i<n);
		}
	}
	return S4;
}
int TongS5(int n){
unsigned long long S5=0;
unsigned long long gt=1;
int i;
for(i=1; i<=n;i++){
gt*=i;
S5+=gt;
}

return S5;	
}
int main(){
	int n;

	do{
	cout<<"Nhap n = ";
	cin>>n;
	if(n<0){
		cout<<"Nhap Sai.NHAPLAI";
	}
	}while(n<0);
	cout<<"---------------------\n";
	cout<<"Bieu thuc tong gom n so hang:\n";
	cout<<"S1= "<<TongS1(n)<<endl;
	cout<<"S2= "<<TongS2(n)<<endl;
	cout<<"S3= "<<TongS3(n)<<endl;
	cout<<"S4= "<<TongS4(n)<<endl;
	cout<<"S5= "<<TongS5(n)<<endl;
	
	
}
