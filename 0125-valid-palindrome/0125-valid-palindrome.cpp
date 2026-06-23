class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";

        for(auto it:s){
            if((it>='a' && it<='z') || (it>='A' && it<='Z') || (it>='0' && it<='9')){
                st+=tolower(it);
            }
        }

        int k = st.size();

        for(int i=0;i<k/2;i++){
            cout<<st[i]<<" "<<st[k-i-1]<<endl;
            if(st[i]!=st[k-i-1]) return false;
        }

        return true;
    }
};