class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int count = 0;
       vector<int>remainder(arr.size(),0);
       for(int i=0;i<arr.size();i++){
        remainder[i] = (arr[i]%k +k)%k;  //this is used to handle the negative values of the array
       }
       map<int,int>mp;
       for(int i=0;i<remainder.size();i++){
        mp[remainder[i]]++;
       }
        if(mp[0]%2 != 0){
            return false; //check the reaminder 0 as there should be even number of remainder 0
        }
        
       for(int rem=1;rem<=k/2;rem++){
        int nextpart = k-rem; // used to find the remaining of the remainder
        if(mp[rem]!=mp[nextpart]){
            return false;
        }
       }
       return true;
    }
};
        
        
