#include <iostream>
int x;
int y=5;
using namespace std;
void sum ()
{ int s;
    s=x+y;
    cout<<s;
}

int main ()
{ x=5;
    sum();
}
