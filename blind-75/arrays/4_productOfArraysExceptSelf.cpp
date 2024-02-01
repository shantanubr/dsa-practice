class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long int x = 1;
        vector<int> v;
        int zeroCount = 0;
        int zeroIndex = -1;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                zeroCount++;
                zeroIndex = i;
            }
        }

        // if the array has no 0s
        if(zeroCount == 0) {
            for(int i=0; i<nums.size(); i++) {
                x*=nums[i];
            }
            for(int i=0; i<nums.size(); i++) {
                int product = x/nums[i];
                v.push_back(product);
            }
            return v;
        }
        // if the array has one 0
        if(zeroCount == 1) {
            int pr = 1;
            for(int i=0; i<nums.size(); i++) {
                if(i != zeroIndex) {
                    pr*=nums[i];
                }
            }
            for(int i=0; i<nums.size(); i++) {
                if(i == zeroIndex) {
                    v.push_back(pr);
                } else {
                    v.push_back(0);
                }
            }
            return v;
        }
        // if the array has multiple 0s
        for(int i=0; i<nums.size(); i++) {
            v.push_back(0);
        }
        return v;
    }
};