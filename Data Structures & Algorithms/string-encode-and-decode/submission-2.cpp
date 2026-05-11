class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            ans+=to_string(strs[i].size());
            ans+="#";
            ans+=strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        int l=s.length();
        int i=0;
        vector<string>ans;
        while(i<l )
        {
            string temp;


            while(i<l && s[i]!='#')
            {
                temp+=s[i];
                i++;
            }
            i++;
            string str;
            int cnt=stoi(temp);
            for(int j=0;j<cnt;j++)
            {
                
                str+=s[i];
                i++;
            }

            ans.push_back(str);
            
        }
        return ans;
    }
};
