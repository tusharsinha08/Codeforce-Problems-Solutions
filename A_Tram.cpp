#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define ll long long
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{   			faster
    int n;
    cin>>n;
    int a, b;
    int x = 0;
    int capacity = 0;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        x += b - a;
        if(x > capacity)
            capacity = x;
    }
    
    cout<<capacity<<nl;
}