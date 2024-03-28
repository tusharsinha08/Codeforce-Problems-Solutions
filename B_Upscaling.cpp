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
        int n;  cin>>n;
        string s1 ="##..##..##..##..##..##..##..##..##..##..##";
        string s2 ="..##..##..##..##..##..##..##..##..##..##..";
        for(int i=0;i<n;i++){
            if(i%2 != 1){
                cout<<s1.substr(0,n*2)<<nl;
                cout<<s1.substr(0,n*2)<<nl;
            }
                
            else {
                cout<<s2.substr(0, n*2)<<nl;
                cout<<s2.substr(0, n*2)<<nl;
            }
                
            
        }
    }
}