#include <iostream>
using namespace std;
int main()
{
 int n= 8;
  for ( int i=1;i<=n; i++){
    for( int j=1; j<=n; j++) {
        if (i%2==0) {cout<< "* ";}
        else cout<< " *";
         }
   cout<< endl ;
   }
    return 0;
}
