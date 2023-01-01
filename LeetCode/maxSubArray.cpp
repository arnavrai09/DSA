//Kadane’s Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        int ans=INT_MIN;
        int sum=0;
        for(auto it : nums){
            sum+=it;
            ans=max(sum,ans);
            if (sum<0) sum=0;
        }
        return ans;
    }
};