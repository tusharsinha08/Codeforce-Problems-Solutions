#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define ll long long
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int power(int a, int b){
    int res = 1;
    if(b == 0) return 1;
    else {
        for(int i=1; i<=b; i++){
            res *= a;
        }
    }
    return res;
}

int main()
{   			faster
    
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = log2(n);
        cout<<power(2,x)<<nl;
    }
}