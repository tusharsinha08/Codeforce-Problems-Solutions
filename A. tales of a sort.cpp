#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        int cnt = 0;

        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << endl;
            continue;
        }

        else
        {
            for (int i = n-1; i >= 0; i--)
            {
                if (a[i] == b[i])
                {
                    cnt++;
                }
                else
                    break;
            }
            int ans = INT_MIN;
            for (int i = 0; i < n - cnt; i++)
            {
                if (ans < a[i])
                    ans = a[i];
            }

            cout << ans << endl;
        }
    }
}
