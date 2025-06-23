 #include <iostream>
using namespace std;


/* this code to print a "V" form with wile loop*/

/* it will be more easy when we use for loop and 
we can make it more efective if we use "cin" */
int main() {
    int n = 5; 
    int i = 0;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (j < i)
                cout << " ";
            else
                cout << "* ";
            j++;
        }
        cout << std::endl;
        i++;
    }
    return 0;
}



