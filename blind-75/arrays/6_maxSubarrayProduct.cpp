class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxk = INT_MIN;
        int curr = 1;

        for(int i=0; i<nums.size(); i++) {
            curr*=nums[i];
            if(curr > maxk) {
                maxk = curr;
            }
            if(curr == 0) {
                curr = 1;
            }
        }

        curr = 1;
        for(int i=nums.size()-1; i>=0; i--) {
            curr*=nums[i];
            if(curr > maxk) {
                maxk = curr;
            }
            if(curr == 0) {
                curr = 1;
            }
        }
 
        return maxk;
    }
};