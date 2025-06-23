#include <iostream>
using namespace std;
/*calculate the factorya using do while  */
int main()
{
    int n,f=1;
    cout<<"Enter a positive number  :";
    cin>>n;
    do
    {
        f=f*n;
        n--;
    }
    while(n>1);
    cout << "The factoial is ->" <<f<< endl;
    return 0;
}
