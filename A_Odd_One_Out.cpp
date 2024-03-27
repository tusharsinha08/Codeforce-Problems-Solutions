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
        int a, b, c;
        cin>>a>>b>>c;
        if(a == b){
            cout<<c<<nl;
        } else if(a == c){
            cout<<b<<nl;
        } else {
            cout<<a<<nl;
        }
    }
}