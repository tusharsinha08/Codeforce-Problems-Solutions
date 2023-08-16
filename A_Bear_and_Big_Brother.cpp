#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define endl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{    fastio
    
    int t = 1;
    // cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int cnt = 0;
        while(a<=b){
            a *= 3;
            b *= 2;
            cnt++;
        }
        cout<< cnt <<endl;
    }
}