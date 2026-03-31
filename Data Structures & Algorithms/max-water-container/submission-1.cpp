class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area=0;
        while(left<right){
            int height=min(heights[left],heights[right]);
            int width=right-left;
            int narea=height*width;
            area=max(area,narea);
            if(heights[left]<heights[right]) left++;
            else right--;
        }
        return area;
    }
};
