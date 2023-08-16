#include <bits/stdc++.h>
#define ll long long
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
        ll a, b, c;
        cin>>a>>b>>c;
        ll x = a - 1;
        ll y = abs(b-c) + abs(c-1);
        if(x == 0)
            cout<< 1 <<nl;
        else if(x < y)
            cout<< 1 <<nl;
        else if(x > y)
            cout<< 2 <<nl;
        else 
            cout<< 3 <<nl;
    }
}