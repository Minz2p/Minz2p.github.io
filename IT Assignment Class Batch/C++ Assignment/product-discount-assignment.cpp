#include<iostream>
using namespace std;
int main() {

    int product_price; // int product_price(15000);
    int discount_value;

    cout << "----- Welcome to shopmarket -----\n";
    cout << " Please enter your product price : " ,(cout << "Ks "); // cout << " Please enter your product price : 15000 ";
    cin >> product_price ;  // cancel

    cout << " Please enter your discount value : ",(cout << "% ") ;
    cin >> discount_value ;

    int result1 = product_price / 100;
    int result2 = (result1 * discount_value);
    int result3 = (product_price - result2);


    cout << " All discount product value is : "<< result3 << " Ks " ;
    
    // cout << result1 << " Ks " << result2 << " % " << result3 << " Ks ";
    
}