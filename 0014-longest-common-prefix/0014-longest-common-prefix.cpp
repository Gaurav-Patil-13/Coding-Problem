class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        
        int n = v.size();
        sort(v.begin(), v.end());

        string f = v[0], l =v[n-1];
        string ans="";
        for(int i=0;i<min(f.size(), l.size()); i++){
            if(f[i] != l[i]){
                return ans;
                break;
            }
            ans+=f[i];
        } 
        return ans; 
    }
};