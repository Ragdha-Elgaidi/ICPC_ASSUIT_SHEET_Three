#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	long long arr[100][100];

	cin >> N ;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	int S_M = 0, S_S = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
			{
				S_M += arr[i][j];
			}
			if(N - 1 - j == i) 
			{
				S_S += arr[i][j];
			}
		}
	}
	cout <<abs( S_M - S_S);

	return 0;
}
