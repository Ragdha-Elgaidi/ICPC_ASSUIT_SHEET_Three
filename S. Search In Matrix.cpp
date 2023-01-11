#include<iostream>
using namespace std;

int main()
{
	int N, M;
	int arr[100][100];

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	bool flag = 0;
	int X;

	cin >> X;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (X == arr[i][j])
				flag = 1;
		}
	}

	if (flag)
		cout << "will not take number" << endl;
	else
		cout << "will take number" << endl;

	return 0;
}
