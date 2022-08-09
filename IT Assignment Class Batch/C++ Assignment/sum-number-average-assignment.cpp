#include<iostream>
using namespace std;
int main() {
    int start_num = 25 , end_num = 210 ;
    int total = 0 , count = 0;

    // // input from user
    // cout << " Enter start number : ";
    // cin >> start_num ; // s = 1
    // cout << " Enter end number : ";
    // cin >> end_num ; // e = 10

    //calculate total and count
    for ( int i = start_num; i <= end_num; i++ ) {
        total = total + i;
        count++;
    }

    cout << " \n " ;
    // display output
    cout << " \n The sum of numbers between 25 and 210 :  " << total << " \n "; // 55
    cout << " \n The number of numbers between 25 and 210 :  " << count << " \n " ;
    cout << " \n The average value of numbers between 25 and 210 :  " << ( (float)total / count ) << " \n " ;
}