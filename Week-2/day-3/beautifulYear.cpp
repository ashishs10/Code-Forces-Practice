#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;
    y++;
    while (true)
    {
        string year = to_string(y);
        bool flag = true;

        int n = year.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (year[i] == year[j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << y;
            return 0;
        }
        y++;
    }
}
