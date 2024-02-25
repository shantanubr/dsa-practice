class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        if(nums.size() == 0 || nums.size() == 1) {
            return false;
        }
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto it : mp) {
            if(it.second > 1) {
                return true;
            }
        }
        return false;
    }
};