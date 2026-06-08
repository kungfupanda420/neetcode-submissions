class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                if(s[i]!=' ')
            {
                str+=tolower(s[i]);
            }
            }
        }
        cout<<str<<endl;
        string x=str;
        reverse(x.begin(),x.end());
        cout<<x<<endl;
        if(str==x)return true;
        else return false;
    }
};
