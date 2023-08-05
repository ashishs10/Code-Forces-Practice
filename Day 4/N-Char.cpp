#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char ch;

    cin >> ch;
    if ( ch < 91 && ch > 40 ) ch = ch + 32;
    else ch = ch - 32;

    cout << ch;

    return 0;
}