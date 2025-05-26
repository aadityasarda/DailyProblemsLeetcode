#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        set<int>st;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin >> vec[i];
            st.insert(vec[i]);
            mp[vec[i]]++;
        }
        if(n==2){
            cout << "Yes" <<endl;
            continue;
        }
        if(st.size() == 1) cout << "Yes" <<endl;
        else if(st.size() > 2) cout << "No" << endl;
        else{
            if(n%2 == 0){
                int flag = 0;
                for(auto i : mp){
                    if(i.second %2 == 1){
                        flag = 1;
                    }
                }
                if(flag == 1) cout << "No" << endl;
                else cout << "Yes"<<endl;
            }
            else{
                int check = (n/2) + 1;
                int flag = 0;
                for(auto i : mp){
                    if(i.second == check){
                        flag = 1;
                    }
                }
                if(flag == 1) cout << "Yes" <<endl;
                else cout << "No" <<endl;
            }
        }
    }
}
