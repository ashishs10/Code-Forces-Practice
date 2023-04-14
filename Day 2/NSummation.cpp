#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num1;
	long long sum = 0;
	
	cin >> num1;
	
	for ( int i = 1; i <= num1; i++)
	{
		sum += i * 1ll;
	}
	
	cout << sum;
}
