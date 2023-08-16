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
        int n;
        cin>>n;
        vi a(n);         // 3 4 7 -2    -------------   ????
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        if(a[0] < 0){
            cout<<a[0]<<endl;
        }
        else {
            cout<<a[n-1]<<endl;
        }
    }
}