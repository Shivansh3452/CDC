class Solution {
public:
    int t[101][101];
    int helper(int i,int j,int m,int n){
        if(i==m-1&&j==n-1)
            return 1;
        if(t[i][j]!=-1)
            return t[i][j];
        int down=0,right=0;
        if(i+1<m)
            down=helper(i+1,j,m,n);
        if(j+1<n)
            right=helper(i,j+1,m,n);
        return t[i][j]=down+right;
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t));
        return helper(0,0,m,n);  
    }
};