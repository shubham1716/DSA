#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long fact = 1;
        int i = 1;

        while (fact <= n) {
            result.push_back(fact);
            i++;
            fact *= i;
        }

        return result;
    }
};


int main() {
    Solution obj;
    long long n;
    cin >> n;
    vector<long long> res = obj.factorialNumbers(n);
    for (auto val : res) {
        cout << val << " ";
    }
    return 0;
}
