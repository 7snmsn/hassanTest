#include <iostream>
using namespace std;
/* there are a simple ERROE in this code  */
int main()
{
    int i,j;
    for(i=9;i>=1;i--)
    {
        for(j=9;j>=1;j-=2)
            if(i>=j)
            cout<<j;
            cout<<endl;
    }

    return 0;
}
