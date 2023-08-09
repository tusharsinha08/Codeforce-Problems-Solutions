#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        map<int, int> mp;
        int d = 0;

        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (d < mp[v[i]])
            {
                d = mp[v[i]];
            }
        }
        sum -= n;

        if (n > 1 && sum >= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}