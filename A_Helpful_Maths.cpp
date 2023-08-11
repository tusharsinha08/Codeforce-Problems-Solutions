#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define nl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{ fastio
    
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int bgn ;
    if(s.size()%2 != 0){
        bgn = s.size()/2;
    }
    else {
        bgn = s.size()/2 -1;
    }
    for(int i=bgn; i<s.size(); i++){
        cout<<s[i];
        if(i != s.size()-1){
            cout<<'+';
        }
    }
    
}