#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    double result = sqrt(num);
    cout << "Square root of " << num << " is " << result;

    return 0;
}
