#include <iostream>
using namespace std; 
int main(){
    cout << "give me thr number \n"; 
    int n; 
    cin>> n; 
    for(int i=n; i>0; i--){ 
        for( int j=n; j>0; j--){
          if(j<=i) cout <<" *"; 
          else cout <<"  "; 
        }
        cout<< endl; 
    }
return 0;
}
