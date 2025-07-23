      // floor-and-ceil-of-integer-division
#include <bits/stdc++.h>
// #include<cmath>
// #include<vector> 
using namespace std;
    vector<int> divFloorCeil(int a, int b) {
        double result = (double)a / b;
        int floorval = floor(result);
        int ceilval = ceil(result);
        return {floorval, ceilval};  
        }
        int  main(){
            int a=-7,b=2;
            vector<int>res=divFloorCeil(a,b);
            cout<<res[0]<<" "<<res[1]<<endl;
            return 0;
        }

