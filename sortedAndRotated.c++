class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotation = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[i+1]) rotation++;
        }
        if(rotation > 1){
            return false;
        }
        if(rotation == 0) return true;
        if(nums[n-1] <= nums[0]) return true;
        return false;
    }
};
