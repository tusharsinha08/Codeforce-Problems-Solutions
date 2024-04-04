//  Tushar Sinha
//  t.sinhatushar@gmail.com

#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define msi map<string, int>
#define pii pair<int, int>
#define ll long long int
#define nl "\n"
#define takeIn(a, n) for(int i=0; i<n; i++) cin>>a[i]
#define print(a, n) for(int i=0; i<n; i++) cout<<a[i]<<" "; cout<<"\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{               faster

    int t = 1;
    // cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll ans;
        // vi a(n);
        //ll x=1, y=2;
        // if(k <= n/2){
        //     for(int i=0; i<n/2; i++){
        //         a[i] = x;
        //         x = x+2;
        //     }
        // }
        // else {
        //     if(n%2 == 0){
        //         for(int i=n/2; i<n; i++){
        //             a[i] = y;
        //             y = y+2;
        //         }
        //     }
        //     else{
        //         for(int i=n/2+1; i<n; i++){
        //             a[i] = y;
        //             y = y+2;
        //         }
        //     }
        // }
        if(k <= (n+1)/2){
            ans = k*2-1;
        }
        else {
            ans = (k-((n+1)/2))*2;
        }
        cout<<ans<<nl;
    }
}