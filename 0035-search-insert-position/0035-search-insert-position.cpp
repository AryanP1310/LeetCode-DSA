class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[0] >= target)
        {
            return 0;
        }
        for(int i =1; i < size(nums); i++)
        {
            if(nums[i] >= target && nums[i-1] < target)
            {
                return i;
                break;
            }
        }
        return size(nums); 
    }
};