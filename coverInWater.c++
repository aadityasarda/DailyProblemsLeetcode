#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        for(int i=1;i<n;i++){
            if(s[i] == '.' && s[i-1]== '.' && s[i+1] == '.'){
                cout << 2 << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1) continue;
        else{
            int count = 0;
            for(int i=0;i<n;i++){
                if(s[i]=='.') count++;
            }
            cout << count << endl;
        }
    }
}
