#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	long long N, first = 0, second = 1, third;
	cin >> N;
	
	if ( N == 1 ) cout << 0;
	else if ( N == 2 ) cout << 1; 
	else {
		while ( N > 2 ) 
		{
			third = first + second;
			first = second;
			second = third;
			N--;
		}
		cout << third;
	}
	
		
}
