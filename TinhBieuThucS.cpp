#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float i, S, n;
    cout << "Nhap n: ";
	cin >> n;
	S = 0;
	for (i = 1; i <= n; i++) {
		S = S + 1 / (i*i*i);
	}
	
	cout << setiosflags(ios :: fixed);
	cout << setprecision(5) << S << endl;
	return 0;
}
