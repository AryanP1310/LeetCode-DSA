class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int k = 0;
        int alt = 0;
        for(int i = 0; i < gain.size(); i++)
        {
            alt += gain[i];
            k = max(k, alt);
        }
        return k;
    }
};