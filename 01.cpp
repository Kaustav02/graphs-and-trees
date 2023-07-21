#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > d)
    {
        cout << -1 << endl;
    }
    else if (b == d)
    {
        if (a < c)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a-c << endl;
        }
    }

    else
    {
        int var = d - b;
        a +=var;
        if (a >= c)
        {
            cout << var+ a - c<< endl;
        }
        else
        {
            cout << -1<< endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
