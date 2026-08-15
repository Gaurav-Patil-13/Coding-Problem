class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans =nums[0];
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            ans^=nums[i];
            if(nums[i]==0)cnt++;
        }
        cnt++;
        return ans!=0?nums.size():(cnt==nums.size())?0:nums.size()-1;
    }
};