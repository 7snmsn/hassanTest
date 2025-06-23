#include <iostream>
using namespace std;
/* It must be resurtive function BUT THERE ARE A BROBLEM WITH*/

int fact (int n)
{if (n==0) return 1;
    else return n*fact(n-1);
}
int main()
{ int i,f=1,sum=0,j,n;
for (i=1; i<=n;i=i++)
{ cin>>n;
     f=f*n;
     cout<<"f"<<i<< "="<<f<<endl;
    }
    sum=sum+f;

cout<< "sum="<<sum;
}
