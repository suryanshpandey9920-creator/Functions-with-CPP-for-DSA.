// WAP to print the Binomial coefficient Ncr.
#include <iostream>
using namespace std;

int fact(int num) {
    int fact =1 ;
    for (int i=1 ; i <= num ; i++) {
        fact *= i;
    }
    return fact ;
}


int main() {
    // Program ato Calculate the Binomal COefficient 
    int n, r;
    cout << "enter the value of n : ";
    cin >> n; 
    cout << "enter the value of r : ";
    cin >> r;
    
    // Formula NCR = n! / r! * (n-r)!

    int ncr ;
    ncr = fact(n) / (fact(r) * fact(n-r));
    cout << "Binomial coefficient = " << ncr << endl;
    
    return 0;
}