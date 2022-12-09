#include<iostream>
using namespace std;

int main()
{

	const int N = 1000;	

	int n, a[N], mn = 100000, mx = -100000;

	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		if (a[i] < mn) 
		{
			mn = a[i];
		}
		if (a[i] > mx) 
		{
			mx = a[i];
		}
	}

	for (int i = 0; i < n; i++) 
	{
		if (a[i] == mn)
			a[i] = mx;
		else if (a[i] == mx)
			a[i] = mn;
	}

	for (int i = 0; i < n; i++) 
	{
		if (i)
			cout << " ";
		cout << a[i];
	}
	return 0;
}
