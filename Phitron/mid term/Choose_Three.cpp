#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n, s;
    while (t--)
    {
        int temp = 0;
        int result = 0;
        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if (n < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(ar, ar + n);
        bool found = false;
        for (int i = 0; i < n - 2 && !found; i++)
        {
            int l = i + 1;
            int r = n - 1;
            while (l < r)
            {
                long long sum3 = (long long)ar[i] + ar[l] + ar[r];
                if (sum3 == s)
                {
                    found = true;
                    break;
                }
                else if (sum3 < s)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
