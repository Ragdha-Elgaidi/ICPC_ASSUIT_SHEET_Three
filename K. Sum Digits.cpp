#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int sum = 0;

  string digits;

	cin >> digits;

	for (int i = 0; i < num; i++)
	{
		sum += (digits[i] - '0');
	}
	cout << sum;
	return 0;
}
