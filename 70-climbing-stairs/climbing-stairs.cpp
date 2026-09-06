class Solution {
public:
    int t[46];
    int helper(int t[],int n){
        if(n<=2)
            return n;
        if(t[n]!=-1)
            return t[n];
        return t[n]=helper(t,n-1)+helper(t,n-2);
    }
    int climbStairs(int n) {
        memset(t,-1,sizeof(t));
        return helper(t,n);
    }
};