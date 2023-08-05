#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int values;
	cin >> values;
	
	int even = 0, odd = 0, pos = 0, neg = 0;
	
	while (values--)
	{
		int num;
		cin >> num;
		if ( num < 0 ) neg++;
		if ( num > 0 ) pos++;
		if ( num % 2 == 0 ) even++;
		if ( num % 2 != 0 ) odd++;
	}
	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl; 
}
