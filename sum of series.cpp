#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfSeries(int n) {
        if (n == 0) return 0;
        return (n * n * n) + sumOfSeries(n - 1);
    }
};


int main() {
    Solution obj;
    int n;
    cin >> n;
    cout << obj.sumOfSeries(n) << endl;
    return 0;
}
