#include<iostream>
#define MAX 100
using namespace std;
int main(){
	int a[MAX];
	int n;
	int i=0;
	cout<<"Nhap n: ";
	cin>>n;
	do{
		int check=0;
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
		for(int j=i-1; j>=0; j--){
			if(a[i]==a[j]){
				cout<<"Phan tu da ton tai, moi nhap lai!";
				check=1;
				break;
			}
		}
		if(check==1){
			continue;
		}else{
			i++;
		}
	}while(i<n);
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
