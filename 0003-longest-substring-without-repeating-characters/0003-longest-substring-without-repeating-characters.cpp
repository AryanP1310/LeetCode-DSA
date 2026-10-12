class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        vector<int> normal(256, -1);
        int maxLength = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++)
        {
            int c = s[right];
            
            if (normal[c] != -1 && normal[c] >= left)
            {
                left = normal[c] + 1;
            }
            normal[c] = right;
            
            maxLength = max(maxLength,right - left + 1);
        }
        
        return maxLength;
    }
};
