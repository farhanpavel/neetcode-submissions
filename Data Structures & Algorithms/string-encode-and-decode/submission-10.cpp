class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";
        for(int i = 0; i < strs.size(); i++) {
            s += to_string(strs[i].length()) + "#" + strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int i = 0;
        while(i < s.size()) {
            int j = i;
            string con="";
            while(s[j] != '#') {
                con+=s[j];
                j++;
            }
            int length=stoi(con);
            v.push_back(s.substr(j+1,length));
            i=j+1+length;
           
        }
        return v;
    }
};
