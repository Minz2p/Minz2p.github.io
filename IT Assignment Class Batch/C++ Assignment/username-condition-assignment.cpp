#include<iostream>
using namespace std;
int main() {
    string user_name ;
    string password ;

        cout << "\n Please log in ! \n ";

        cout << " Enter user name : ";
        cin >> user_name;

        cout << " Enter password : ";
        cin >> password;

    if ( user_name != "mmit"  && password != "admin123" ) {
        cout << " Username and Password do not match ! ";
    } else if ( user_name == "mmit"  && password == "admin123" ) { // ask question => what's the double else if , this code is down write , why not show this code ?  
        cout << " Log in success ! ";
    }else if ( user_name == "mmit" && password != user_name ) { 
        cout << " Password is not correct ! ";
    } else if ( user_name != password && password == "admin123" ) {  
        cout << " Username is not correct ! ";
    }

    
}