class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start =1;
        int end =*max_element(piles.begin(),piles.end());
        int ans =end;
        while(start<=end){
            int mid = start+(end-start)/2;
            long long hour =0;
            for(int pile:piles){
                hour +=(pile+mid-1)/mid;

            }
            if(hour<=h){
                ans= mid;
                end =mid-1;
            }
            else{
                start = mid+1;
            }
         
        }
           return ans;
        
    }
};