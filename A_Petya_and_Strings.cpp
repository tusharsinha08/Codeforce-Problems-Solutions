#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define nl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); // cout.tie(NULL);

using namespace std;
int main()
{ fastio
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if(s1 < s2){
        cout<< -1 <<nl;
    }
    else if(s1 > s2){
        cout<< 1 <<nl;
    }
    else{
        cout<< 0 <<nl;
    }
}