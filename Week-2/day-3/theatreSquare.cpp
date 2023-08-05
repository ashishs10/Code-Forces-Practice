#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	long long n, m, a;
	cin >> n >> m >> a;
	
	long long x = (n+a-1)/a;
	long long y = (m+a-1)/a;
	//sum of ciel of len n and width n 
	cout << x*y;
	
}
