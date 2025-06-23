#include <iostream>
using namespace std;
/*There are many errors that need to be fixed in this code*/
int main()
{
int sum= 0;
int avr=1;
int x[6];
cout << "give me 5 numbers " ;
for(int i=1; i<=6; i++) cin>> x[i] ;

for( int j=1; j<=6;j++){
    if(x[j]>=50){
        sum= sum+x[j];
    }
    else break;
     cout << "the student is fail";
}
avr= sum/6;
if(avr>=50){ cout<< "the avreg is" << avr;}
    return 0;
}
