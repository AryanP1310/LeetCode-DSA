class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> nums2(n + 1, 0);
        std::vector<int> ans;
        
        for(int i = 0; i < n; i++)
        {
            nums2[nums[i]]++;
        }
        for(int i = 1; i <= n; i++)
        {
            if(nums2[i] == 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};