class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

            vector<pair<int,int>>v;
            for(int i=0;i<nums.size();i++){
                v.push_back({nums[i], i});
            }
            sort(v.begin(), v.end());

            int i=0;
            int x =0;
            int y=0;
            for(auto it:v){
                if(i==0){
                    y =it.first;
                    x = it.second;
                    i=1;
                }
                else{
                    if(it.first == y){
                        if(abs(it.second-x)<=k) return 1;
                        x = it.second;
                    }
                    else{
                        y =it.first;
                        x =it.second;
                    }
                }
            }
            return 0;

    }
};