class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string>ans;
        string k ="", h="";
        for(int i=0;i<n; i++){
            k+=".";
        }
        ans.push_back(k);
        for(int i=0;i<n-1; i++){
            h+="#";
        }
        h+=".";
        for(int i=0;i<m-1;i++){
            ans.push_back(h);
        }
        return ans;
    }
    
};