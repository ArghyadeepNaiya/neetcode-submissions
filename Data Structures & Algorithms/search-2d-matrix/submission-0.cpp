class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0,right=matrix.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int l=0,r=matrix[mid].size()-1;
            int m;
            while(l<=r){
                m=l+(r-l)/2;
                if(matrix[mid][m]==target){
                    return true;
                    break;
                }
                if(matrix[mid][m]>target){
                    r=m-1;
                }
                else l=m+1;
            }
            if(matrix[mid][m]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }

        }
        return false;
    }
};
