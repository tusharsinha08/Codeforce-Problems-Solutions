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
        int n;
        cin>>n;
        if(n%2 != 0){
            cout<<"NO"<<nl;
        } else {
            cout<<"YES"<<nl;
            string s = "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ";
            cout<<s.substr(0, n)<<nl;
        }
    }
}