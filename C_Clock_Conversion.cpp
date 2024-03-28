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
        string s;
        cin>>s;
        int h = stoi(s.substr(0, 2));
        string last = s.substr(2, 3);
        if(h <= 12 and h != 0) {
            if(h == 12){
                cout<<s<<" PM"<<nl;
            }
            else{
                cout<<s<<" AM"<<nl;
            }
            
        }
        else if(h==0){
            cout<<"12"<<last<<" AM"<<nl;
        }
        else {
            h = h-12;
            if(h >= 10){
                cout<<h<<last<<" PM"nl;
            }
            else
                cout<<"0"<<h<<last<<" PM"<<nl;
        }
    }
}