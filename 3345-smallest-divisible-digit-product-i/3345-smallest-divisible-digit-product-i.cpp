class Solution {
    int mult(int n,int t){
        int lim =min(n+10, 100);
        for(int i=n;i<=lim;i++){
            int m=1;
            int k=i;
            while(k>0){
                m*=(k%10);
                k/=10;
            }
            if(m%t==0) return i;
        }
        return -1;
    }
public:
    int smallestNumber(int n, int t) {
        
        int ans= mult(n,t);
        return ans;
    }
};