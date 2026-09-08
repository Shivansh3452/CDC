class Solution {
public:
    vector<vector<int>> ans;
    void helper(int i,int n,vector<int>& temp,vector<int>& nums){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        helper(i+1,n,temp,nums);
        temp.pop_back();
        helper(i+1,n,temp,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        helper(0,n,temp,nums);
        return ans;
    }
};