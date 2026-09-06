// WAP to check entered number is palendrome or not.
#include <iostream>
using namespace std;

void palendrome(int n) {
    int real = n ;
    int digit ;
    int pd = 0; 
    while (n > 0) {
        digit = n % 10;
        pd = (10* pd) + digit   ;
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