#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int n)
{
	if (n == 1 ) return false;
	if ( n == 2 ) return true;
	if ( n % 2 == 0 ) return false;
	for ( int i = 3; i <= n * 0.5; i+=2 )
	{
		if ( n % i == 0 ) return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int N; 
	cin >> N;
	
	for ( int i = 1; i <= N; i++ )
	{
		if (checkPrime(i)) cout << i << " " ; 
	}
	 
}

