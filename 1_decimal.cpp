// WAP to convert a binary number to a decimal number.
#include <iostream>
using namespace std;

void binaryyTodecimal( int binary) {
    int n = binary;
    
    // Coverting the binary to decimal
    int digit ;
    int dec = 0;
    int pow = 1;
    
    while ( n > 0) {
        digit = n % 10;
        // Takes out the remainder
        dec = (digit * pow ) + dec ;
        // This will multiply the digit with power of 2 and add it with the decimal value 
        pow *= 2;
        // This will multiply the power by 2 in every iteration
        n = n / 10;
    } 
    cout << "The decimal form of " << binary << " is " << dec << endl;

}
int main() {

    int n;
    cout << "enter any binary number : ";
    cin >> n;

    binaryyTodecimal(n);
    return 0;
}