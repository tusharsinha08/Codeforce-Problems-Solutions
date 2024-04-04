//  Tushar Sinha
//  t.sinhatushar@gmail.com

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define mii map<int, int>
#define msi map<string, int>
#define pii pair<int, int>
#define ll long long
#define lli long long int
#define nl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define takeIn(a, n) for(int i=0; i<n; i++) cin>>a[i]
#define print(a, n) for(int i=0; i<n; i++) cout<<a[i]<<" "; cout<<"\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main()
{               faster

    int t = 1;
    cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;
        cin>>s;
        s += "zzzz";
        int cnt = 0;
        for(int i=0; i<s.size(); i++){
            string t = "";
            t += s[i], t += s[i+1], t += s[i+2], t += s[i+3], t += s[i+4];
            string t2 = "";
            t2 += s[i], t2 += s[i+1], t2 += s[i+2];
            if(t == "mapie"){
                i+=4; cnt++;
            }
            else if(t2 == "map"){
                i+=2; cnt++;
            }
            else if(t2 == "pie"){
                i+=2; cnt++;
            }
        }
        cout<<cnt<<nl;
    }
}