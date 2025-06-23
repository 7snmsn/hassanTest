#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=9;i>=1;i--)
    {
    for( j=9;j>i;j=+2)
    cout<<j;
    }
    cout<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
