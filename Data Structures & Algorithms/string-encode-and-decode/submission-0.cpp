class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(string s:strs)
        {
            int len=s.size();
            enc+=to_string(len)+"#"+s;
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string>dec;
        int i=0;
        while(i<s.size())
        {
            int de_pos=s.find('#',i);
            int length=stoi(s.substr(i,de_pos-i));
            i=de_pos+1;
            string str=s.substr(i,length);
            dec.push_back(str);
            i+=length;
        }
        return dec;
    }
};
