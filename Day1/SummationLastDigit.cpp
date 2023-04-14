#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num1, num2;
	
	cin >> num1 >> num2;
	
	int lastDigit1 = num1 % 10;
	int lastDigit2 = num2 % 10;
	
	int sumLastDigits = lastDigit1 + lastDigit2;
	
	cout << sumLastDigits;
}
