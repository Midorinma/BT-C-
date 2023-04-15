#include <iostream>
using namespace std;
int main()
{
int n,S;
n=1;
while(n<1000){
S=0;
for (int i=1;i<n;i++) if(n%i==0) S+=i;
if(S==n) cout << n <<endl;
n++;
}
return 0;
}
