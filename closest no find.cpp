#include <iostream>
#include <cmath>
using namespace std;

 
int closestNumber(int n, int m) {
    int quotient = n / m;
    int candidate1 = m * quotient;         
    int candidate2;

    if ((n * m) > 0) { 
        candidate2 = m * (quotient + 1);   
    } else {
        candidate2 = m * (quotient - 1);   /
    }

    
    if (abs(n - candidate1) < abs(n - candidate2)) {
        return candidate1;
    } else if (abs(n - candidate2) < abs(n - candidate1)) {
        return candidate2;
    } else {
        
        return (abs(candidate1) > abs(candidate2)) ? candidate1 : candidate2;
    }
}


int main() {
    int n, m;
    cout << "Enter n and m: ";
    cin >> n >> m;

    cout << "Closest number to " << n << " divisible by " << m << " is: "
         << closestNumber(n, m) << endl;

    return 0;
}
