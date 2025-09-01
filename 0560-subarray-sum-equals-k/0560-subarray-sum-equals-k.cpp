class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int>mpp;
     int n=nums.size();
     mpp[0]=1;
    int presum=0,cnt=0;
    for(int i=0;i<n;i++){
        presum +=nums[i];
        int remove=presum-k;
             cnt += mpp[remove];
            

            mpp[presum]++; 
    }
        return cnt;
    }

};