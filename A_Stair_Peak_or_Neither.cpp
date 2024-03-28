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
        if(a < b and b < c){
            cout<<"STAIR"<<nl;
        } else if(a < b and b > c){
            cout<<"PEAK"<<nl;
        } else {
            cout<<"NONE"<<nl;
        }
    }
}