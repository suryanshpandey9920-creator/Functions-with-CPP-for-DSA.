// WAP to check entered number is palendrome or not.
#include <iostream>
using namespace std;

void palendrome(int n) {
    int real = n ;
    int digit ;
    int pd = 0; 
    while (n > 0) {
        digit = n % 10; // Takes out the remainder.
        pd = (10* pd) + digit;  // It store number in 0th,1th,10th,100th,1000th.
        digit = digit ;
        n = n / 10;
    }
    if (real == pd) {
        cout << real << " is a palendrome number \n";

    } else {
        cout  << real << " is not a palendrome number \n";
    }
    return ;
}

int main() {
    int n; 
    cout << "enter the number : ";
    cin >> n;

   cout << "Number is : " , palendrome (n);

    return 0;
}