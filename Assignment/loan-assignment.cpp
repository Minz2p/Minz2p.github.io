#include<iostream>
using namespace std;
int main() {

    int loan_amount;
    int loan_rate;
    int loan_months;

    cout << " ------ Customer Loan Account ------ \n" ;

    cout << " Please enter the loan amount : " , cout << " Ks ";
    cin >> loan_amount ; 

    cout << " Please enter the loan rate : " , cout << " % " ;
    cin >> loan_rate ;

    cout << " Please enter the loan month : " , cout << " M " ;
    cin >> loan_months ;

    int result1 = loan_amount / 100 ;
    int result2 = (result1 * loan_rate);
    int result3 = (result2 * loan_months);


    // cout << " All discount product value is : "<< result3 << " Ks " ;
    
    cout  << " The whole month of loan interest : " << result2 << " Ks " << " \n The whole month of loan amount : " << result3  << " Ks " ;
    
}