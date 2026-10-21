class Solution {
public:
    int minOperations(string s) {
        
        char mn='z';
        char mx='a';
        for(auto it:s){
            mn = min(it,mn);
            mx = max(it, mx);
        }

        string k = s;
        int n =s.size();
        sort(k.begin(), k.end());
        if(k == s) return 0;
         if(n<=2)return -1;
        if(s[0]==mn || s[n-1]==mx)return 1;  
        // if(s[0]==mx || s[n-1]==mn)return 2;

        int cntmx =0, cntmn=0;
        for(int i=1; i<n-1; i++){
            if(s[i]==mx)cntmx = i;
            if(s[i]==mn)cntmn = i;
            if(s[i]==mn||s[i]==mx) return 2 ;
        }
        // cout<<cntmx<<" "<<cntmn<<endl;
        // if(abs(cntmx-cntmn)<n-1)return 2;      
        return 3;
        // if(s[0]==mx && s[n-1]==mn)return 3;  
        
    }
};  