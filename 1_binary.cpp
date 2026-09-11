// WAP to print the binary form of a number.
#include <iostream>
using namespace std;

// Creating a function to convert the number to REVERSE binary form
// Part 1 printing the reversed binary form
void binaryy(int n) {
    int binary =  0;
    int digit;
    while (n > 0) {
        digit = n % 2;
        binary = (10 * binary ) + digit;
        n = n/2;
    }
   
    cout << "Binary in reverse form : " << binary << endl;

    // Part 2 Reversing to print the original binary form
    int revBinary = 0;
    int newDigit;
    while (binary > 0) {
        newDigit = binary % 10;
        revBinary = (10 * revBinary) + newDigit;
        binary = binary / 10;
    }
    cout << "Binary in original form : " << revBinary << endl << endl;
} 
 
// Main 
int main() {
    cout << "=========================================\n";
    cout << "    Odd number binary calculator. \n";
    cout << "=========================================\n \n";
    int n;
    cout << "enter the value of n : ";
    cin >> n ; 

    binaryy(n);

    cout << "=========================================\n";
    cout << "   Program Execution successfull.\n";
    cout << "=========================================\n";
   return 0;
}