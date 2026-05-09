class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=1;
        vector<int>ans;
        vector<pair<int,int>>tmp;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                cnt++;
            }
            else{
                tmp.push_back({cnt,nums[i-1]});
                cnt=1;
            }

        }
        tmp.push_back({cnt,nums[n-1]});

        sort(tmp.begin(),tmp.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++)
        {
            ans.push_back(tmp[i].second);
        }
        return ans;
    }
};
