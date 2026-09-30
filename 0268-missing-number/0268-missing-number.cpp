class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::unordered_map<int, int> countMap;

        for(int num : nums)
        {
            countMap[num]++;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(countMap[i] == 0)
            return i;
        }
        return nums.size();
    }
};