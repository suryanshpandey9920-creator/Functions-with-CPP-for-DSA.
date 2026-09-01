// WAP to enter Paramater value (Arguments) through function.
#include <iostream>
using namespace std;

int sum( int a , int  b ) {  // Here int a and b are parameters.
    int sum = a+b;
    return sum;
}

// Function having the default parameter value.
int product ( int a , int b  = 1 ) {  // Here, b = 1  is the default value of b
    int multiplication = a * b ;
    return multiplication;
}

int main(){

    int s = sum (10 , 20) ;  //Here 10  and 20 are arguments.
    cout << "Sum = " << s << endl; // printing the variable who have the Sum fn.

    cout << product( 5 );
    cout << endl;
    return 0;

}