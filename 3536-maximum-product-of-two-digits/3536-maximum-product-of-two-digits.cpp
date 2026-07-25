class Solution {
public:
    int maxProduct(int n) {
        
        int maxi1 =-1;
        int maxi2 = -1;

        while(n>0){
            if(n%10 >maxi1){
                maxi2 =maxi1;
                maxi1 = n%10;
            }
            else if(n%10 >maxi2){
                maxi2 = n%10;
            }
            n/=10;
        }
        return maxi1*maxi2;
    }
};