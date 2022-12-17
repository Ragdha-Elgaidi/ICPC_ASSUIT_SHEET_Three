#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N ;

	cin >> N;

	int A[10000];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = N-1; i >= 0; i--)
	{
		cout << A[i] << " ";
	}

	return 0;
}
