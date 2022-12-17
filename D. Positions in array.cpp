#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int A[10000];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];

		if (A[i] <= 10)
			cout << "A[" << i << "] = " << A[i] << endl;
	}

	return 0;
}
