// WAP to print all prime till n using function
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {

    if ( n == 1 ) {
        false ;
    }
    for ( int i=2 ; i*i<=n ; i++) {
        if ( n % i == 0 ) {
            return false;
        }   
    }
    return true;
}
void allPrime(int n) {
    cout << "Prime number are : ";
    for (int i = 2 ; i<=n; i++) {
        if ( isPrime(i)) {
            cout << i <<  " ";
        }
    }
    cout << endl;
}
int main() {

    int n;
    cout << "enter value of n : ";
    cin >> n ; 

    allPrime(n);
    return 0;
}