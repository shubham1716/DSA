#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int count = 0;
    int original = n; 

    while (n > 0) {
        int digit = n % 10;  
        if (digit != 0 && original % digit == 0) {
            count++;
        }
        n /= 10; 
    }

    cout << count << endl; 
    return 0;
}
