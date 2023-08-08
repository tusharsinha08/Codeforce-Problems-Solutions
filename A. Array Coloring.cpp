#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n, cnt =0;
        cin>>n;
        while(n--){
            int a;
            cin>>a;
            if(a%2 != 0)
                cnt++;
        }
        if(cnt%2 != 0)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }

	//return 0;
}

