class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // Edge case: empty array

        int i = 0;  // pointer for the position of unique elements
        
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {  // found a new unique element
                i++;
                nums[i] = nums[j];    // move it to next position
            }
        }
        return i + 1;  // number of unique elements
    }
};
