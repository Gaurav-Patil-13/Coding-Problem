class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, mult =1;
        int c =n;
        // #pragma omp parallel for
        while(n>0){
            int x =n%10;
            sum+=x;
            mult*=x;
            n/=10;
        }
        cout<<sum<<" "<<mult<<" ";
        return (c%(sum+mult)==0)?1:0;
    }
};