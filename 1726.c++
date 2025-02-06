class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        map<int , int>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mp[nums[i]*nums[j]]++;
            }
        }
        int count = 0;
        for(auto i : mp){
            if(i.second >= 2) count += 8*((i.second * (i.second-1))/2);
        }
        return count;
    }
};
