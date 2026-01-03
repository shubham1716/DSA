class Solution {
public:
    bool rotateString(string s, string goal) {
  
        int n =s.size();
              if(n!=goal.size()) return false;
            for(int k=0;k<n;k++){
        char temp = s[0];
        for(int i=0;i<n-1;i++){
             s[i]=s[i+1];

        }
        s[n-1]=temp;
        if(s==goal)
        return true;
            }

       return false;;
    }
};