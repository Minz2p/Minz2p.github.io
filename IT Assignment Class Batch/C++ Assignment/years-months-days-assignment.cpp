#include<iostream>
using namespace std;
int main() {

    int no_of_days ;

    cout << " Please enter the number of days : " ;
    cin >> no_of_days ;

    int years = no_of_days / 365 ;
    int months = (no_of_days % 365) / 30 ;
    int days = (no_of_days % 365) % 30 ;

    cout << years << " Years : " << months << " Months : " << days << " Days " ;
    
}