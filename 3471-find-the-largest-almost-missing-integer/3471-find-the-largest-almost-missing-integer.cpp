class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(nums.size() ==k) return *max_element(nums.begin(), nums.end());

        map<int,int>m;
        for(int i=0;i<k;i++){
            m[nums[i]]=(i+1);
        }
        for(int i=k;i<nums.size()-k+1;i++){
            m[nums[i]] = m[nums[i]]+k;
        }
        int x =k-1;
        for(int i=nums.size()-k+1;i<nums.size();i++){
            m[nums[i]] = m[nums[i]]+x;
            x--;
        }
        
        int ans=-1;
        for(auto it:m){
            if(it.second==1){
                ans = max(ans, it.first);
            }
        }
        return ans;    
    }
};