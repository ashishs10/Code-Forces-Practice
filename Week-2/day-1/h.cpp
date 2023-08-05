#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int X;
	cin >> X;
	
	if ( X == 2 ) cout << "YES";
	else if ( X % 2 == 0 ) cout << "NO";
	else
	{
		for ( int i = 3; i <= X*0.5; i+=2 )
			{
				if ( X % i == 0 ) 
			{
				cout << "NO";
				return 0;
			}
		}
		cout << "YES";
	}
}
