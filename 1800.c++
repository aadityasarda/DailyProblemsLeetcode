//Brute force solution
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = 0;
        for(int i=0;i<n;i++){
            int ans = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j] > nums[j-1]){
                    ans += nums[j];
                }
                else{
                    break;
                }
            }
            maxi = max(maxi,ans);
        }
        return maxi;
    }
};
