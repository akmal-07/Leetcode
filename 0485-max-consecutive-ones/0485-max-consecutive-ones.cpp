class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),one=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) one++;
            ans=max(one,ans);
            if(nums[i]==0) one=0;
        }
        return ans;
    }
};