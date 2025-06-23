#include <iostream>
using namespace std;
/*this is for print 
***
 **
  *
*/

int main()
{
    cout << " give me the number of rows" ;
    int x;
    cin >> x ;
    for( int i= 1; i < x ; i++ ) {
         for ( int j =1 ; j < x ; j++ ) {
            if ( j>=i) {
                cout << "* ";
}
else
        cout << "  ";
 }
 cout << endl;
 }
    return 0;
}
