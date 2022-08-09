#include<iostream>
using namespace std;
int main() {
    int item_price;
    int item_quantity;

    cout << " \n----- Welcome to shopmarket -----\n ";
    cout << " Please enter your item price : " , ( cout << "Ks " );
    cin >> item_price ;

    cout << " Please enter your item quantity : " , ( cout << "Qty " ) ;
    cin >> item_quantity ; // say question : cin >> item_quantity,(cout << "Qty\n ") ; => how to use the \n for up

    int result1 = ( item_price * item_quantity ) ;
    int result2 = ( result1 / 100 ) ;
    int result3 = ( result2 * 10 ) ;
    int result4 = ( result1 - result3 ) ;

    if ( result1 > 5000 ) { 
        cout << " Your amount value is : "<< result4 << " Ks " ;
    } else {
        cout << " Your total amount is : "<< result1 << " Ks " ;
    }


    // cout << " All product discount value is : "<< result4 << " Ks " ;


}
