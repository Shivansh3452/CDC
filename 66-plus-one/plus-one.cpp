class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--){
            nums[i]++;
            nums[i]%=10;
            if(nums[i]!=0)
                return nums;
        }
        nums.insert(nums.begin(),1);
        return nums;
    }
};