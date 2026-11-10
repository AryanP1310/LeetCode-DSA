class Solution {
public:
    int lengthOfLastWord(string s) {
        int endpos = s.find_last_not_of(" ");
        if (endpos == std::string::npos)
        return 0;

        string str = s.substr(0, endpos);
        int startpos = str.find_last_of(" ");
        if (startpos == std::string::npos)
        return endpos + 1;

        return endpos - startpos;
    }
};