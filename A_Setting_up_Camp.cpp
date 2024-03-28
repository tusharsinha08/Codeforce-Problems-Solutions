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
        int ans = a;
        int r = b%3;
        if(r == 0){
            ans += b/3;
            if(c%3 == 0){
                ans += c/3;
            }
            else if(c%3 != 3) {
                ans+=(c/3)+1;
            }
        }
        else if(c >= 3-r){
            b += 3-r;
            c -= 3-r;
            ans += b/3;
            if(c%3 == 0){
            ans += c/3;
            }
            else if(c%3 != 3) {
                ans += (c/3)+1;
            }
        }
        else ans = -1;
        
        cout<< ans <<nl;
    }
}