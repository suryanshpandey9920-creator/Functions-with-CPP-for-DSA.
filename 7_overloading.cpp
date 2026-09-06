// WAP to show the function overloading in CPP.
#include <iostream>
using namespace std;

int sum( int a , int b) {
    cout << "This function will perform addition on integers .  \n";
    cout << "Sum of a + b is : "  ;
    return a+b;
}
double sum( double a , double b) {
    cout << "This function perform addition on float, doubles \n";
    cout << "Sum of a + b is : "  ;
    return a+b;
}

int main() {

    cout << "Function Overloadin is the process of Declaring Function \n";
    cout << "With same Name and with different datatypes and paramaters. \n \n";

    cout << sum( 10 , 20);
    cout << sum(10.25, 5.3);

    return 0;
}