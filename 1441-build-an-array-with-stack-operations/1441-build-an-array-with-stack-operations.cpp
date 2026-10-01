class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int l = target.size();
        std::unordered_map<int, int> count;
        for(int i = 0; i < l; i++)
        {
            count[target[i]]++;
        }
        for(int i = 1; i <= n; i++)
        {
            ans.push_back("Push");

            if(i == target[l - 1])
            break;
            
            if(count[i] == 0){
            ans.push_back("Pop");
            }
        }
        return ans;
    }
};