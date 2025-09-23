class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n=nums.size();
        // int xo=0;
        // for(int i=0;i<n;i++){
        //  xo ^= nums[i];
        // }
        // return xo;
        // sort(nums.begin(),nums.end());
        // int i=0;
        // int n=nums.size();
        // int ans=-1;;
        // while(i<n){
        //     if(i+1<n && nums[i]==nums[i+1]){
        //     i = i+2;}
            
        //     else{
        //         ans=nums[i];
        //         break;

        //     }

        // }
        // return ans;
        unordered_map<int,int>freqmap;
        for(int i=0;i<nums.size();i++){
            int num =nums[i];
            freqmap[num]=freqmap[num]+1;
        } 
        // int ans;
        // unordered_map<int,int>::iterator it;
        for(auto it:freqmap){
        int key=it.first;
        int value=it.second;
        if(value==1){
      return key;
        }
        }
        return -1;
    }  

};