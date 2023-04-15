#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,j;
	tiep:cout<<"n= ";cin>>n;
	if(n<0) goto tiep;
	if(n==2){
		cout<<"Khong co so nguyen to < "<<n;
	}
	for(i=2; i<n; i++){
		for(j=2; j<=sqrt(i); j++ )
			if(!(i%j))break;
			if(j>(i/j))
			cout<<"cac so nguyen to < "<<n<<" la: "<<i<<endl;
		
	}
	return 0;
}
