#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, d;
	int product, lastTwoDigit;
	
	cin >> a >> b >> c >> d;
	
	if ( a < 10 && b < 10 && c < 10 && d < 10 )
	{
		product = a * b * c * d;
		lastTwoDigit = product%100;
		if (lastTwoDigit == 0) cout << "00";
		else if (lastTwoDigit < 10 ) cout << "0" << lastTwoDigit;
		else cout << lastTwoDigit; 
	}
	else 
	{
		product = (a%100)*(b%100)*(c%100)*(d%100);
		lastTwoDigit = product%100;
		if (lastTwoDigit == 0) cout << "00";
		else if (lastTwoDigit < 10 ) cout << "0" << lastTwoDigit;
		else cout << lastTwoDigit;
	}
}

