class Solution {
public:
    // Hash map approach: store each value with its index in one pass,
    // and check if the complement (target - current) already exists.
    // Time: O(n), Space: O(n)
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numToIndex;

        for(int i=0; i<nums.size(); i++){
            int current=nums[i];
            int complement=target-current;

            if(numToIndex.find(complement)!=numToIndex.end()){
                return {numToIndex[complement], i};
            }
            
            numToIndex[current]=i;
        }
        return {};
    }
};
