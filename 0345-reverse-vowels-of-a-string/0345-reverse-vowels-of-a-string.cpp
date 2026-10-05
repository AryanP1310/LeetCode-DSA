class Solution {
public:
    string reverseVowels(const string& s) {
        stack<char> st;
        for(int i=0;i<s.size();i++) {
            const char& c = s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') st.push(c);
        }
        string ret = "";
        for(int i=0;i<s.size();i++) {
            const char& c = s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                ret += st.top();
                st.pop();
            }
            else ret += c;
        }
        return ret;
    }
};