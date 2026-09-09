class Solution {
public:
    vector<vector<int>> ans;
    void helper(int i,vector<int>& temp,vector<int>& nums){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        helper(i+1,temp,nums);
        temp.pop_back();
        while(i+1<nums.size()&&nums[i]==nums[i+1]){
            i++;
        }
        helper(i+1,temp,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<int> temp;
        helper(0,temp,nums);
        return ans;
    }
};