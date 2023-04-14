#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string F1, S1, F2, S2;

    cin >> F1 >> S1;
    cout << endl;
    cin >> F2 >> S2;

    if (S1 == S2 )
    {
      cout << "ARE Brothers";
    }
    else cout << "NOT";
    
    return 0;
}