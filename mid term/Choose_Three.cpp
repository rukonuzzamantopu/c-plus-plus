#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool found = false;
        for (int i = 0; i < N - 2 && !found; i++)
        {
            for (int j = i + 1; j < N - 1 && !found; j++)
            {
                for (int k = j + 1; k < N && !found; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        found = true;
                    }
                }
            }
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}