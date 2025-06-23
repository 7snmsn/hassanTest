#include <iostream>

using namespace std;

int main()
{
   for(int i= 1; i<=9; i++ ){
    for ( int j=1; j<=11 ; j++){
            if (j==1||j==11)
           cout << " * ";
           else if (i==5)
            cout << "*";
             else cout<< " ";
    }
    cout << endl ;
   }
    return 0;
}
