#include<bits/stdc++.h>

using namespace std;

long long rangeSum(int num1, int num2)
{
	num1--;
	long long left = num1*1ll*(num1+1)/2;
	long long right = num2*1ll*(num2+1)/2;
	
	long long sum = right - left;
	return sum;
}

int main()
{
	int testCases;
	cin >> testCases;
	
	while(testCases > 0)
	{
		int num1, num2;
		cin >> num1 >> num2;
		//pass the min number as num1 in function
		if(num1 < num2)
		{
		cout << rangeSum(num1, num2) << endl;
		}
		else cout << rangeSum(num2, num1) << endl;
		
		testCases--;
	}
}
