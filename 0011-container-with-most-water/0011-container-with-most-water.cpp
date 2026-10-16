class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftptr = 0;
        int rightptr = height.size() - 1;
        int area = 0;

        while(leftptr < rightptr)
        {
            int length = min(height[leftptr], height[rightptr]);
            int breadth = rightptr - leftptr;
            area = max(area, (length * breadth));
            if(height[leftptr] < height[rightptr]) leftptr++;
            else rightptr--;

            /*
            int left = height[leftptr], right = height[rightptr];
            if(left < right) {
                area = max(area, (rightptr-leftptr) * left);
                leftptr++;
            }
            else {
                area = max(area, (rightptr-leftptr) * right);
                rightptr--;
            }
            */
        }
        return area;
    }
};