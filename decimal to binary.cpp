#include <iostream>
using namespace std;

string decToBinary(int n) {
    if (n == 0) return "0";

    string binary = "";
    while (n > 0) {
        int remainder = n % 2;
        binary = char(remainder + '0') + binary; 
        n = n / 2;
    }
    return binary;
}

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    string binary = decToBinary(n);
    cout << "Binary: " << binary << endl;

    return 0;
}
