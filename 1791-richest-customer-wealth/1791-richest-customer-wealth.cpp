class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
     
    
        int wealth=0;

        for(int i=0;i<accounts.size();i++){
            int sumi=0;
            for(int j=0;j<accounts[i].size();j++){
                sumi += accounts[i][j];
            }
            if(sumi>wealth)
            wealth=sumi;
        }
        return wealth;
     
       
        
    }
  
};