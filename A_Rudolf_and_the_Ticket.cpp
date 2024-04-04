//  Tushar Sinha
//  t.sinhatushar@gmail.com

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define mii map<int, int>
#define msi map<string, int>
#define pii pair<int, int>
#define ll long long
#define lli long long int
#define nl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define takeIn(a, n) for(int i=0; i<n; i++) cin>>a[i]
#define print(a, n) for(int i=0; i<n; i++) cout<<a[i]<<" "; cout<<"\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main()
{               faster

    int t = 1;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        vi a(n+1), b(m+1);
        takeIn(a, n);
        takeIn(b, m);

        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i]+b[j] <= k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<nl;
    }
}