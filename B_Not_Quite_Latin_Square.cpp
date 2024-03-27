#include <bits/stdc++.h>
#define vi vector<int>
#define mii map<int, int>
#define mci map<char, int>
#define ll long long
#define nl "\n"
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{   			faster
    
    int t = 1;
    cin>>t;
    while(t--){
        char str[3][3];
        bool a, b, c;
        char ans = 'X';
        for(int i=0; i<3; i++){
            a = 0; b=0; c=0;
            for(int j=0; j<3; j++){
                cin>>str[i][j];
                if(str[i][j] == 'A'){
                    a=1;
                } else if(str[i][j] == 'B'){
                    b=1;
                } else if(str[i][j] == 'C') {
                    c=1;
                }
            }
            if(a==0) {
                ans='A';
                break;
            }
            else if(b==0){
                ans = 'B';
                break;
            } 
            else if(c==0) {
                ans = 'C';
                break;
            }
            a=0; b=0; c=0;
        }
        cout<<ans<<nl;
    }
}