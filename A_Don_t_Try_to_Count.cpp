//  Tushar Sinha
//  t.sinhatushar@gmail.com

#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define msi map<string, int>
#define pii pair<int, int>
#define ll long long
#define nl "\n"
#define takeIn(a, n) for(int i=0; i<n; i++) cin>>a[i]
#define print(a, n) for(int i=0; i<n; i++) cout<<a[i]<<" "; cout<<"\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{               faster

    int t = 1;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        string x, s;
        cin>>x>>s;
        bool f = false;
        int ans = 0;
        for(int i=0; i<10; i++){
            if(x.find(s) != -1){
                ans = i;
                f = true;
                break;
            }
            else {
                x = x+x;
            }
        }
        if(f == 0) cout<<-1<<nl;
        else cout<<ans<<nl;
    }
}