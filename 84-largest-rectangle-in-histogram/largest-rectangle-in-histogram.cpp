class Solution {
public:
    vector<int> prevSmaller(vector<int>& nums){
        vector<int> ans;
        stack<int> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!st.empty()&&nums[st.top()]>=nums[i])
                st.pop();
            int ele=(st.empty())?-1:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        return ans;
    }
    vector<int> nextSmaller(vector<int>& nums){
        vector<int> ans;
        stack<int> st;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&nums[st.top()]>=nums[i])
                st.pop();
            int ele=(st.empty())?n:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
    int largestRectangleArea(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        vector<int> prev=prevSmaller(nums);
        vector<int> next=nextSmaller(nums);
        for(int i=0;i<n;i++){
            int curr=(next[i]-prev[i]-1)*nums[i];
            res=max(res,curr);
        }
        return res;
    }
};