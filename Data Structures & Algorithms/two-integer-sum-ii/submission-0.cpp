class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int l=0;
        int n=nums.size()-1;
        while(l<n)
        {
            if(nums[l]+nums[n]==t)
            {
                return {l+1,n+1};
            }
            else if(nums[l]+nums[n]>t)
            {
                n--;
            }
            else{
                l++;
            }
        }
        return {};
    }
};
