#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;
    cin >> num;
    
    if ( num == 2 ) cout << "YES";
    else if ( num % 2 == 0 ) cout << "NO";
    else
    {
        for ( int i = 3; i*i <= num; i += 2 )
        {
            if ( num % i == 0 ) 
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}
