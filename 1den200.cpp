#include <iostream> 
#include <iomanip>
using namespace std; 
  
int main() {
   int i, j, count;
     
   cout << "In bang so: " << endl;
   for(i = 1; i <= 10; i++) {
      for(j = i; j <=200; j += 10 ) {
         cout << setw(5) << j;
      }
      cout << endl;
   }
  
   return 0;
}
