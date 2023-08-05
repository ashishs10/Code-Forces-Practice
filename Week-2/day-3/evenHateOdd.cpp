#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        int a[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 != 0)
            cout << -1 << endl;
        else if (odd == 0 || even == 0)
            cout << n / 2 << endl;
        else if (odd > even)
            cout << n / 2 - even << endl;
        else
            cout << n / 2 - odd << endl;
    }
}