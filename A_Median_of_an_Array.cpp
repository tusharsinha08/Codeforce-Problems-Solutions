#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define ll long long
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{   			faster
    
    int t = 1;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int mIdx = n/2;
        sort(a.begin(), a.end());
        if(a.size()%2 == 0){
            mIdx = n/2-1;
        }
        int mid = a[mIdx], cnt = 0;
        // cout<<mid<<nl;
        for(int i=mIdx; i<n; i++){
            if(a[i] == mid){
                cnt++;
            }
        }
        cout<<cnt<<nl;
    }
}