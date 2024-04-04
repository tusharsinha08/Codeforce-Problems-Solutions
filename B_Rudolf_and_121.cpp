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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define takeIn(a, n)            \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define print(a, n)             \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " ";    \
    cout << "\n"
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    faster

        int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n + 1);
        takeIn(a, n);
        bool ans = true;
        for(int i=1; i<n-1; i++){
            if(a[i+1] >= a[i-1] and a[i] >= a[i-1]*2) {
                a[i] -= a[i-1]*2;
                a[i+1] -= a[i-1];
                a[i-1] = 0;
            }
        }
        for(auto i:a){
            if(i != 0){
                ans = false;
                break;
            }
        }
        if (ans)
            yes;
        else
            no;
    }
}