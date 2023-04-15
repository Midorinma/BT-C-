#include<iostream>
#include<string.h>
#define MAX 10
using namespace std;
union anime{
	int ten;
	float tap;
	long ngay;
};
void show(anime kimochi){
	cout<<kimochi.ten<<endl;
	cout<<kimochi.tap<<endl;
	cout<<kimochi.ngay<<endl;
}
int main(){
	anime kimochi;
	kimochi.ten=12;
	kimochi.tap=156;
	kimochi.ngay=12;
	show(kimochi);
	return 0;
}
