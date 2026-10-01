class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = word1.size();
        int b = word2.size();
        string result = "";

        for (int i = 0; i < max(a, b); i++)
        {
            if (i < a)
                result.push_back(word1[i]);
            if (i < b) 
                result.push_back(word2[i]);
        }
        return result;
    }
};