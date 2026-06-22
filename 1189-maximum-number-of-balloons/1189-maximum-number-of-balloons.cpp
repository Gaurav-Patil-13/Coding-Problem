class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int>m;

        for(auto it:text){
            m[it]++;
        }
        string s = "balloon";
        int cnt=INT_MAX;
        int b=0;
        
        for(auto it:s){
            if(m[it]==0){
                return 0;
            }
            else if(it=='l'){
                cnt = min(cnt, m[it]/2);
                b=1;
            }
            else if(it=='o'){
                cnt = min(cnt, m[it]/2);
            }
            else{
                cnt= min(cnt, m[it]);
            }
        }
        return cnt;

    }
};