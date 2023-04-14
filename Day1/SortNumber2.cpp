#include<bits/stdc++.h>

using namespace std;

int main()
{
	string num1, num2;
	
	cin >> num1 >> num2;
	
	cout << (num1[num1.length() - 1] - '0') + (num2[num2.length() - 1] - '0');
}
