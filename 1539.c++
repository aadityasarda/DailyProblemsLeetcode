//Approach-1 - O(k)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int num = 1;
        int i = 0;
        int ans = -1;
        while(i<n && k>0){
            if(num == arr[i]){
                i++;
            }
            else{
                k--;
                if(k == 0){
                    ans = num;
                    break;
                }
                
            }
            num++;
        }
        if(ans == -1) return arr[n-1]+k;
        return ans;
    }
};

//Approach-2 O(logn)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if((arr[mid] - (mid+1)) >= k){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l+k;
    }
};
