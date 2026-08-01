class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            int c = int(s[i])-int('a');
            freq[c]++;
        }
        for(int i=0;i<t.size();i++){
            int c = int(t[i])-int('a');
            freq[c]--;
        }
        for(auto it:freq){
            if(it!=0) return false;
        }
        return true;
    }
};