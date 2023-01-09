#include<iostream>
using namespace std;

int main()
{
	long long n, m,j=0;
	long long a[10000];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int c = 0;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		for (; j < n; j++)
		{
			if (x == a[j])
			{
				c++;
				j++;
				break;
			}
		}
	}

	if (c == m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
