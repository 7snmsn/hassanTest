#include <iostream>
using namespace std;
/*  this project is to pray */


int main()
{
    cout << "Which prayer do you want to pray?\n";
    cout << "1 - Morning prayer\n"
         << "2 - Duhr prayer\n"
         << "3 - Asr prayer\n"
         << "4 - Maghrib prayer\n"
         << "5 - Isha prayer\n";

    int x;
    cin >> x;

    int r = 0;
    switch (x) {
        case 1: r=  2; break;
        case 2: r = 4; break;
        case 3: r = 4; break;
        case 4: r = 3; break;
        case 5: r = 4; break;
        default:
            cout << "Invalid prayer number.\n";

    }

    for  ( int rakah = 1; rakah <= r ; rakah++ ) {
        cout << "\nPress any number to start Rak'ah " << rakah << ": ";
        int input;
        cin >> input;

        cout << "You are in Rak'ah " << rakah << endl;

        for (int sujood = 1; sujood <= 2; sujood++) {
            cout << "Press any number to perform Sujood " << sujood << ": ";
            cin >> input;

            cout << "You are in Sujood " << sujood << " of Rak'ah " << rakah << endl;
        }

    }

    cout << "\nYou have completed the prayer. May Allah accept it.\n";

    return 0;
}
