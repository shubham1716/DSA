// By Finding the Remainder
 #include <bits/stdc++.h>
 using namespace std;
 bool iseven(int n){
     int rem=n%2;
     if(rem==0){
         return true;
     }
     else{
         return false;
     }
 }
 int main(){
     int n=15;
     if(iseven(n)){
         cout<<"true";
     }
     else{
         cout<<"false";
     }
     return 0;
 }
// input is 15
// output is false

                // Using Bitwise AND Operator 

#include <bits/stdc++.h>
using namespace std;
bool iseven(int n){
    if((n & 1)==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=44;
    if(iseven(n)==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
// input is 44
// output is true
