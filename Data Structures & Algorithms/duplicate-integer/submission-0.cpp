class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> ust;
        for(int i = 0; i < nums.size(); i++) {
            if(ust.find(nums[i]) != ust.end()) {
                return true;
            }
            ust.insert(nums[i]);
        }
        return false;
    }
};