#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int pos = n.find('.');

    if (pos == string::npos)
    {
        cout << "int " << n << endl;
    }
    else
    {
        string iport = n.substr(0, pos);
        string deport = n.substr(pos + 1);

        bool isInt = true;
        for (char c : deport)
        {
            if (c != '0')
            {
                isInt = false;
                break;
            }
        }

        if (isInt)
        {
            cout << "int " << iport << endl;
        }
        else
        {
            cout << "float " << iport << " 0." << deport << endl;
        }
    }

    return 0;
}
