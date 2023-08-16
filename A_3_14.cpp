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
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        string pi ="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        // string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        //cout<< fixed << setprecision(n) <<ans <<nl;   
        cout<<  pi.substr(0, n+2)<<nl;  
    }
}