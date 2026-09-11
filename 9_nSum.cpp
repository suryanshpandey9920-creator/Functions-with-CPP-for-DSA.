// WAP to print Sum from 1 to n 
#include <iostream>
using namespace std;

int nSum (int n) {
    int sum  = 0;
    for (int i = 0; i<=n ; i++) {
        sum += i;
       
    }
    cout << "Sum from 1 to " << n << " is : ";
    return sum;
} 
int main() {

    int n;
    cout << "enter the value of n : ";
    cin >> n; 

    cout << nSum(5);
    return 0;
}