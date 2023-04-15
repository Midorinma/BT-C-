#include<iostream>
using namespace std;
enum Dayofweek{monday=2,tuesday=3,wednesday=4,thursday=5,friday=6,saturday=7,sunday=8};
int main(){
	enum Dayofweek ngay;
	ngay=thursday;
	cout<<"Thursday: "<<ngay<<endl;
	cout<<"ALL day of week: "<<monday<<"_"<<tuesday<<"_"<<wednesday<<"_"<<friday<<"_"<<saturday<<"_"<<sunday;
	return 0;
}
