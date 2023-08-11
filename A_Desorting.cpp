#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define nl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); // cout.tie(NULL);

using namespace std;
int main()
{ fastio
    
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        // int in1, in2;
        int ans=0;
        int dif = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(!is_sorted(a.begin(), a.end())){
            cout<< ans <<nl;
        }
        else{
            for(int i=0; i<n-1; i++){
                
                if((a[i+1] - a[i]) < dif){
                    dif = a[i+1] - a[i];
                    // in2 = a[i+1];
                    // in1 = a[i];
                }
            }
            ans = (dif/2)+1;
            cout<< ans <<nl;
        }
    }
}