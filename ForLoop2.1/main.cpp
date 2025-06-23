#include <iostream>
using namespace std;
/*This code is coulclute the fuctoryal of nun-odd numbers */
int main()
{
  int sum= 0 ;
    for ( int i =2; i<=10 ; i+=2){
      int f= 1;
              for ( int j= 1; j<= i ; j++ ){
                            f= f *j ;
                                  }



cout << "the valu of i is = " << i << " |and " << "the f is ="<< f<< endl;
sum= sum + f ;
   }
   cout << endl << endl<< "the number is = " << sum << endl;
    return 0;
}
