class Solution {
public:
    int t[501][501];
    int helper(int i,int j,string word1,string word2){
        if(i==word1.size())
            return t[i][j]=word2.size()-j;
        if(t[i][j]!=-1)
            return t[i][j];
        if(j==word2.size())
            return t[i][j]=word1.size()-i;
        if(word1[i]==word2[j])
            return t[i][j]=helper(i+1,j+1,word1,word2);
        return t[i][j]=1+min({helper(i+1,j,word1,word2),helper(i,j+1,word1,word2),helper(i+1,j+1,word1,word2)});
    }
    int minDistance(string word1, string word2) {
        memset(t,-1,sizeof(t));
        return helper(0,0,word1,word2);
    }
};