#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        int req = (x - vec[n-1])*2;
        req = max(req,vec[0]-0);
        for(int i=1;i<n;i++){
            req = max(req,vec[i]-vec[i-1]);
        }
        cout << req << endl;
    }
}
