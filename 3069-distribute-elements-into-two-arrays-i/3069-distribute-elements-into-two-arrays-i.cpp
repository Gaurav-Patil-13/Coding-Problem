class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a,b;
        int aa=0, bb=0;
        if(nums[0]){
            a.push_back(nums[0]);
            aa =nums[0];
        }
        if(nums[1]){
            b.push_back(nums[1]);
            bb=nums[1];
        }

        for(int i=2;i<nums.size();i++){
            if(aa>bb){
                a.push_back(nums[i]);
                aa = nums[i];
            }
            else{
                b.push_back(nums[i]);
                bb = nums[i];
            }
        }
        for(int i=0;i<b.size();i++)a.push_back(b[i]);
        return a; 
    }
};