class Solution {
public:
    bool isPerfectSquare(int num) {
        int low =1, high = num/2;
        if(num ==1)return 1;
        while(low<=high){
            int mid = low +((high-low)/2);
            long long x =1LL*mid*mid;
            if(x==num)return 1;
            else if(x<num)low=mid+1;
            else high = mid-1;
        }
        return 0;
    }
};