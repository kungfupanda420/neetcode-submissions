class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int l=0;
        // int r=n-1;
        // while(l<r)
        // {
        //     if(nums[l]+nums[r]==t)
        //     {
        //         return {l,r};
        //     }
        //     else if(nums[l]+nums[r]>t)
        //     {
        //         r--;
        //     }
        //     else{
        //         l++;
        //     }
        // }
        // return {-1};
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(t-nums[i])!=mp.end() && mp[t-nums[i]]!=i)
            {
                return {i,mp[t-nums[i]]};
            }
        }
        return {};



    }
};
