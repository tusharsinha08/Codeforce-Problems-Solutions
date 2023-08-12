#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define nl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{ fastio
    
    int t = 1;
    cin>>t;
    while(t--){
        string s;
        vector<char> ans(10);
       
        int idx = 0;
        for(int i=0; i<8; i++){
            cin>>s;
            for(int j=0; j<8; j++){
                if(s[j] != '.'){
                    
                    ans[idx] = s[j];
                    idx++;
                }
            }
        }
       
        for(int i=0; i<idx; i++){
            cout<<ans[i];
        }
        cout<<nl;
         
    }
}