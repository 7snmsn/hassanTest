#include <iostream>
using namespace std; 
class me{
public: 
    string name ; 
    int age ; 
    int hight; 

    // to print the valu 
    void ToGive(){
        cout << " the name is "<< name<< endl;
        cout << " the age is "<< age << endl;
        cout << " the hight is "<< hight<< endl;
        }
    }; 

int main(){
    me x1;
    x1.name= "HASSAN"; 
    x1.age= 19; 
    x1.hight=20000; 

    x1.ToGive(); 

    me x2; 
    x2.name= "AHMAD"; 
    x2.age=18;
    x2.hight= 120; 

}