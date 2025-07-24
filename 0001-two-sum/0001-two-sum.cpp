class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
             unordered_map<int, int> mp; // value -> index
        for(int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if(mp.find(remain) != mp.end()) {
                // found the pair
                return {mp[remain], i};
            }
            mp[nums[i]] = i; // store value with its index
        }
        return {}; // in case no solution, but problem guarantees one solution
    
        
    }
};