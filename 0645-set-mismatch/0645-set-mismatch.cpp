class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        std::unordered_map<int, int> counts;
        
        for (int num : nums) {
            counts[num]++;
        }
        
        int duplicate = 0;
        int missing = 0;
        
        for (int i = 1; i <= n; i++) {
            if (counts[i] == 2) {
                duplicate = i;
            } else if (counts[i] == 0) {
                missing = i;
            }
        }
        
        return {duplicate, missing};
    }
};
