#include <iostream>
#include <vector>
using namespace std;


int factorialIterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    
    cout << "Factorial (Iterative): " << factorialIterative(n) << endl;


    return 0;
}
