    // if ( result ) = > result == 1 ( ask question )
#include<iostream>
using namespace std;
int main() {

    int sum_digits ;
    int total ;
    
    cout << " Enter sum of digits : " ;
    cin >> sum_digits ;

    for ( int i = sum_digits; i <= sum_digits ; i ++ ) {

        if ( sum_digits / sum_digits ) {
                        // 3                         2                            2
           total = ( sum_digits % 100 ) / 3 + ( sum_digits - 1 / 100 ) % 3 ;
           total ++ ;
            cout << total - 1 ;
            
        }
           
    }

    // cout << " Sum : " << total ; // 55
}

