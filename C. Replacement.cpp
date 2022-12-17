#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int Array[10000];

	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];

		if (Array[i] > 0)
			Array[i] = 1;
		else if (Array[i] < 0)
			Array[i] = 2;
	}

	for (int i = 0; i < N; i++)
	{
		cout << Array[i] << " ";
	}
	return 0;
}
