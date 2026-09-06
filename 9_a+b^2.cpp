// WAP to create a function who prints the ( a + b )^2 {whole square}
#include <iostream>
using namespace std;

int a_bSQUARE (int a , int b) {
   int formula  =  ((a*a ) + (2* (a*b)) +(b*b) )  ; // Formula for (a+b)^2.
   cout << " the value of a square + b square is : ";
   return formula;
}
int main() {

    int a , b;
    cout << "enter the value of a : ";
    cin >> a ;

    cout << "enter the value of b : ";
    cin >> b ;

    cout << a_bSQUARE( a, b);
    return 0;
}