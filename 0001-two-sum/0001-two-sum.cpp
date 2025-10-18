class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  // value → index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // If complement already exists in map, return indices
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            // Otherwise, store current number and its index
            mp[nums[i]] = i;
        }
        
        return {};  // No valid pair found (though problem guarantees one)
    }
};
