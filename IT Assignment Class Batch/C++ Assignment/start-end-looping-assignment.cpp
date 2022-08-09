// => ask question why do this code step by step write to do 
#include<iostream>
using namespace std;
int main() {
    int start_num , end_num;

    // cout << " Enter start number : ";
    // cin >> start_num ; 
    // cout << " Enter end number : ";
    // cin >> end_num ;

    // // for ( int i = start_num; i <= end_num; i++ ) {
    // //     if( i % 8 == 0 && i % 5 == 0) {
    // //         cout << i << " is only divided by 8 and 5\n ";
    // //     } else if( i % 8 == 0 ) {
    // //         cout << i << " is only divided by 8\n ";
    // //     } else if( i % 5 == 0) {
    // //         cout << i << " is only divided by 5\n ";
    // //     } else if( i % 8 != 0 && i % 5 != 0) {
    // //         cout << i << " is not divided by 8 and 5\n ";
    // //     }
    // // }

    cout << " Enter start number : ";
    cin >> start_num ; 
    cout << " Enter end number : ";
    cin >> end_num ;

    for ( int i = start_num; i <= end_num; i++ ) {
        if( i % 8 == 0 && i % 5 == 0) {
            cout << i << " is only divided by 8 and 5\n ";
        }
    }

    cout << " Enter start number : ";
    
    cin >> start_num ; 
    cout << " Enter end number : ";
    cin >> end_num ;

    for ( int i = start_num; i <= end_num; i++ ) {
        if( i % 8 == 0 ) {
            cout << i << " is only divided by 8\n ";
        }
    }

    cout << " Enter start number : ";
    cin >> start_num ; 
    cout << " Enter end number : ";
    cin >> end_num ;

    for ( int i = start_num; i <= end_num; i++ ) {
        if( i % 5 == 0) {
            cout << i << " is only divided by 5\n ";
        } 
    }

    cout << " Enter start number : ";
    cin >> start_num ; 
    cout << " Enter end number : ";
    cin >> end_num ;

    for ( int i = start_num; i <= end_num; i++ ) {
        if( i % 8 != 0 && i % 5 != 0) {
            cout << i << " is not divided by 8 and 5\n ";
        }
    }


}