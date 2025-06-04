class Solution {
public:
    long long distributeCandies(int n, int limit) {
        int mini = max(0 , n - 2*limit);
        int maxi = min(n , limit);

        long long ways = 0;
        for(int i=mini;i<=maxi;i++){
            int N = n-i;
            int minch2 = max(0,N-limit);
            int maxch2 = min(N,limit);

            ways += maxch2 - minch2 + 1;
        }
        return ways;
    }
};
