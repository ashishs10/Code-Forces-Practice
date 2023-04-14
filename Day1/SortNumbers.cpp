#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int num1 = a;
	int num2 = b;
	int num3 = c;
	
	if ( a > b ) swap( a, b);
	if ( b > c ) 
	{
		swap (b , c);
		if (a > b ) swap(a, b);
	}
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
}
