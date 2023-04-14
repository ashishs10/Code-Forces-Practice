#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num1, num2, num3;
    
    cin >> num1 >> num2 >> num3;
    
    if ( num1 > num2) swap(num1, num2);
    if ( num2 > num3 )
    {
		swap( num2, num3 );
		if ( num1 > num2 ) swap(num1, num2);
    }
    
    cout << num1 << " " << num3;
    
    return 0;
}
