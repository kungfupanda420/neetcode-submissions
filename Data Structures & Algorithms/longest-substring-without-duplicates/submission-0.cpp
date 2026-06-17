class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0,ans=0;
        unordered_set<char>cs;
        for(int i=0;i<n;i++)
        {
            while(cs.find(s[i])!=cs.end())
            {
                cs.erase(s[l]);
                l++;
            }
            cs.insert(s[i]);
            ans=max(ans,i-l+1);
            
        }
        return ans;
        
        
    }
};
