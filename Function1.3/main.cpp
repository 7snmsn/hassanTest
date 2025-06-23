#include <iostream>

using namespace std;
int sqr(int y)
{
int z;
z=y*y;
return(z);
}

int main()
{
 int a;
 for(a=1;a<=10;a++)
  cout<<sqr(a)<<'\t';

    return 0;
}
