class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res=0;
        int low =0, high = nums.size()-1;
        while(low<=high){
            int mid = low -((low-high)/2);
            if(nums[mid]>=target)high =mid-1;
            else{
                res = mid+1;
                low = mid+1;
            }
        }
        return res;
    }
};