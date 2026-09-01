// WAP create a function takes input and decides 
#include <iostream>
using namespace std;

// function to check even odd
void check ( int n) {

    if ( n % 2 == 0 ) {
        cout << n << " is Even. \n";
    } else {
        cout << n << " is Odd. \n";
    }
    
}
int main() {

    check(4); // Providing input to the porogram.
    return 0;
}