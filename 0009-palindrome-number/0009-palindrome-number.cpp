class Solution {
public:
    bool isPalindrome(int x) {
        int revno=0;
        int dup=x;
        while(x>0){
            int lastdigit=x%10;
                       if (revno > INT_MAX / 10 || (revno == INT_MAX / 10 && lastdigit > 7)) {
            return 0; 
        }
        if (revno < INT_MIN / 10 || (revno == INT_MIN / 10 && lastdigit < -8)) {
            return 0; 
        }
          
            revno=(revno*10)+lastdigit;
              x=x/10;
        }
        if(revno==dup){
            return true;
        }
        else{
            return false;
        }
    }
};