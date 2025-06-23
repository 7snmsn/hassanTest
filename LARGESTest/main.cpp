#include <iostream>

using namespace std;

/* this code to make u write 5 numbers and it will give u the largest one between them */
/* I cane make it more effective by make it give me another value to smallest number */
int main()
{
    int x[5];
   /* cin>>x[0]>> x[1]>>x[2]>> x[3]>> x[4]; Bad way*/
   for(int i=0; i<5; i++){
   cin>> x[i]; }
   
    int y= 1;
    for( int j=1; j<5; j++)
        if(y<x[j]){
           y=x[j];
    }
    cout << "the largest number is " << y;
   return 0;
}
