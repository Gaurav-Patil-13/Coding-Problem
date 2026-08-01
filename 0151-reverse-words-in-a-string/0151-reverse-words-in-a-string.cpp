class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;

        int n = s.size();
        string word = "";
        string ans="";

        int cnt=0;
        for(int i=0;i<n;i++){ 
            if(int(s[i]) != 32){
                word+=s[i];
                cnt=0;
            }
            else{
                cnt++;
                if(i==0 || i==n-1) continue;
                if(int(s[i-1])==32) continue;
                st.push(word);
                word="";
            }
        }
        if (!word.empty())
            st.push(word);
        int k =st.size();
        for(int i=0;i<k;i++){
            ans+=st.top();
            st.pop();
            if(!st.empty()) ans += " ";
        }
        return ans;
    }
};