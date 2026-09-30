#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::vector<int> sorted_nums = nums;
        
        sort(sorted_nums.begin(), sorted_nums.end());
        
        std::unordered_map<int, int> num_to_count;
        for (int i = 0; i < sorted_nums.size(); ++i) {
            if (num_to_count.find(sorted_nums[i]) == num_to_count.end()) {
                num_to_count[sorted_nums[i]] = i;
            }
        }
        
        std::vector<int> result;
        for (int num : nums) {
            result.push_back(num_to_count[num]);
        }
        
        return result;
    }
};
