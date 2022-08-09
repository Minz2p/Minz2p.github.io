//  if ထဲ မှာ ရှိ တဲ့ result ထဲ က ++ အရေ အတွက် နဲ့ for looping ++ အ‌ရေ အတွက် နဲ့ ပေါင်း ပြီး နှုတ် ( type_num - result1 )
#include<iostream>
using namespace std;
int main() {
    int type_num;
    int any_num;
    
    int result1 = ( type_num - result1 ) ;
    int result2 = ( any_num < 0 )  ;
    int result3 = ( any_num == 0 ) ;

    cout << " \n Enter start number : ";
    cin >> type_num  ; // 5 
    // cout << " \n " ;


    for ( int i = 0; i < type_num ; i++ ) { 

            cout << " \n Enter any number : "; 
            cin >> any_num ;

            if ( any_num > 0 ) { 
                 result1 ++ ; // 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 
                
                // cout << result1 ;
            } else if ( any_num < 0 ) {
                result2 ++ ; 
                // cout << result2 ;
            } else if ( any_num == 0 ) {
                result3 ++ ;
                // cout << result3 ;
            }
    }

            cout << " \n --------------------------------------------- \n " ;
            cout << " \n Numbers of positive number : " << result1 ;
            cout << " \n " ;
            cout << " \n Numbers of negative number : " << result2 ;
            cout << " \n " ;
            cout << " \n Numbers of zero : " << result3 << " \n " ;
           

}

    
    