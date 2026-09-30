class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int end_range = nums.size();
        int i = 0;
        while(i < end_range){
            if(i != nums[i]) return i;
            i++;
        }
        return end_range;
    }
};