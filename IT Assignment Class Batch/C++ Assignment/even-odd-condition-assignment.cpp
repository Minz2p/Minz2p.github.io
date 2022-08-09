#include<iostream>
using namespace std;
int main() {
    int even;
    cout << " \n Welcome to my number world !\n ";

    cout << "Enter any number : ";
    cin >> even ;

    if ( even % 2 == 0 ) { 
        cout << even << " is even ";
    } else {
        cout << even <<" is odd ";
    }
}