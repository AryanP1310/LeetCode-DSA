class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size();
        if(digits[a - 1] != 9)
        {
            digits[a - 1]++;
            return digits;

        }
        else{
            digits[a - 1] = 0;
            for(int i=a-2; i >=0; i--)
            {
                if(digits[i] != 9){
                    digits[i]++;
                    return digits;
                }
                else{
                    digits[i]=0;
                }        
            }
            digits.insert(digits.begin(), 1);
            return digits;
        }
    }
};