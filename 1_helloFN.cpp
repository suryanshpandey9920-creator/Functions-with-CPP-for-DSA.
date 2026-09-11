// WAP to print hello world form different function.
#include <iostream>
using namespace std;

// Creating a function to print hello world.
void sayhello() {
    cout << "hello world :) \n";
}

// An assistant function to call the sayhello function.
void assistant() {
    sayhello();
    cout << "Work is done through Aassistant \n";

}

int main() {

    sayhello();
    assistant();
    
    return 0;
}