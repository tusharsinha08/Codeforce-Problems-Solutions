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
        vi a(n);
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool ans = false;
        
        sort(a.begin(), a.end());
        
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]){
                ans = true;
            }
        }

        if(ans == false){
            cout<<-1<<nl;
        }
        else
        {
            int ac = 1;
            for(int i=ac; i<n; i++){
                if(a[ac] == a[ac-1]){
                    ac++;
                }
            }
            
            cout<< ac <<" "<< n-ac <<nl;
            for(int i=0; i<ac; i++){
                cout<<a[i]<<" ";
            }
            cout<<nl;
            for(int i=ac; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<nl;
        }
    }
}