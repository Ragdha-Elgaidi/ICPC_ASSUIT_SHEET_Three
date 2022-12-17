#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int N;
	long long num;

	cin >> N;

	long long sum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << abs(sum) << endl;

	return 0;
}
