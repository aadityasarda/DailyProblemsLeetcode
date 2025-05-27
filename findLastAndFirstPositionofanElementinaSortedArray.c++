class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;
        int leftmost = -1;
        int rightmost = -1;
        vector<int>result;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
               leftmost = mid;
               r = mid-1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                l = mid +1;
            }
        }
        result.push_back(leftmost);
        
        l = 0;
        r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
               rightmost = mid;
               l = mid+1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                l = mid +1;
            }
        }
        result.push_back(rightmost);
        return result;
    }
};
