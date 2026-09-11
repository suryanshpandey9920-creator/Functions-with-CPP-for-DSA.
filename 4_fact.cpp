// WAP to enter a Number and print the factorial form a function.
#include <iostream>
using namespace std;

void fact( int n) {
    int factorial =1;
    for (int i = 1; i <=n ; i++ ){  // Factorial Logic.
        factorial *= i;
    }
    cout << n << " factorial is : " << factorial << endl;
}

int main() {
    int num;
    cout << "enter any number : ";
    cin >> num ;

    cout << endl;

    // Call the function and give any number. 
    // Passing by value 
    fact(num); 

    // Directly Providing a value to the function.
    fact(4); 
   
    return 0;
}