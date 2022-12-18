#include<iostream>
using namespace std;

int main()
{
	long long n ;

	cin >> n;
	if (n == 1)
		cout << 0<<endl;
	else if (n == 2)
		cout << 1<<endl;
	else
	{
		long long a = 0, b = 1,c;
		for (long long cnt = 2; cnt < n; ++cnt)
		{
			c = a + b;
			a = b;
			b = c;
		}
		cout << c << endl;
	}
	return 0;
}
