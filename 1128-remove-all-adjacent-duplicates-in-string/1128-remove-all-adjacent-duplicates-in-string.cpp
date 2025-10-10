class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        int n=s.length();
        for(int i=0;i<n;i++){
            int currentchar = s[i];

            if(ans.empty() ||currentchar != ans.back()){
                ans.push_back(currentchar);
            }
            else if(currentchar == ans.back()){
                ans.pop_back();
            }
        }
        return ans;
    }
};