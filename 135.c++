class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int candy = n;
        int  i =1;

        while(i < n){
            int peak = 0;
            if(ratings[i] == ratings[i-1]){
                i++;
                continue;
            }
            while(ratings[i] > ratings[i-1]){
                peak++;
                i++;
                candy += peak;
                if(i == n) return candy;
            }
            int dip = 0;
            while(i < n && ratings[i] < ratings[i-1]){
                dip++;
                i++;
                candy += dip;
            }
            candy -= min(peak,dip);
        }
        return candy;
    }
};
