class Solution {
public:
    int expandaround(string s,int i, int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int center=0;center<s.length();center++){
            int i=center;
            int j=center;
            int oddtotal =expandaround(s,i,j);
            i =center;
            j=center+1;
            int eventotal =expandaround(s,i,j);
            totalcount =totalcount+oddtotal+eventotal;
        }
        return totalcount;
    }
};