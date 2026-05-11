class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        vector<int>pref(n,1);
        vector<int> suf(n,1);
        int pref_prod=1,suf_prod=1;
        for(int i=0;i<n;i++)
        {   pref[i]=pref_prod;
            pref_prod*=nums[i];
            
        }
        for(int i=n-1;i>=0;i--)
        {
            suf[i]=suf_prod;
            suf_prod*=nums[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=(pref[i]*suf[i]);
        }
        // ans.push_back(nums[n-1]*pref[n-1]);
        return ans;

        
    }
};
