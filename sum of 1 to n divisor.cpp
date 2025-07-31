#include <iostream>
using namespace std;

class Solution {
public:
    long long sumOfDivisors(long long n) {
        long long total = 0;
        for (int i = 1; i <= n; i++) {
            total += (n / i) * i;
        }
        return total;
    }
};

int main() {
    Solution obj;
    long long n;
    cin >> n;  
    cout << obj.sumOfDivisors(n) << endl;
    return 0;
}
