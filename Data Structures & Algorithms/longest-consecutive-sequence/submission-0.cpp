class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>mp(nums.begin(),nums.end());
        int longest=0;
        for(int num:mp)
        {
            if(mp.find(num-1)==mp.end())
            {
                int l=1;
                while(mp.find(num+l)!=mp.end())
                {
                    l++;
                }
            longest=max(longest,l);
            }
           
        }
        return longest;
        
        


    }
};
