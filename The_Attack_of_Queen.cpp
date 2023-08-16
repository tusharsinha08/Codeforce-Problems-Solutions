#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define nl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;



int main()
{    fastio
    
    int t = 1;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        int hor = 2*(n - 1);
        int diag = 0;
        
        diag += min(n-y, x-1);
        diag += min(y-1, x-1);
        diag += min(y-1, n-x);
        diag += min(n-x, n-y);
        
        cout<< hor + diag <<nl;
    }
}