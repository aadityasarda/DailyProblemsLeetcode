class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        sort(time.begin(), time.end());
        long long l = 1;
        long long r = (long long)time[0]*(long long)totalTrips;
        long long ans = -1;
        while(l <= r){
            long long mid = l + (r-l)/2;
            long long sum = 0;
            for(int i=0;i<n;i++){
                sum += mid/time[i];
            }
            if(sum >= totalTrips){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};

TC - O(log(time[0]*toatalTrips) * O(n)) + nlogn(sorting)
