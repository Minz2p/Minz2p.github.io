#include<iostream>
using namespace std;
int main() {
    int positive;
    int negative;
    cout << " \n Welcome to my number world !\n ";

    cout << "Enter any non-zero number : ";
    cin >> positive ;

    if ( positive > 0 ) { 
        cout << positive << " is positive. ";
    }

        cout << " \nEnter any non-zero number : ";
        cin >> negative ;

    if ( negative < 0 ) {
    cout << negative << " is negative. ";
    }
}