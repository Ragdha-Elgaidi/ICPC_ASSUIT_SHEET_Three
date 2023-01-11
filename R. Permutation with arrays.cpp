#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	long long array_A[10000], array_B[10000];

	cin >> N ;

	for (int i = 0; i < N; i++)
	{
		cin >> array_A[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> array_B[i];
	}

	sort(array_A, array_A + N);
	sort(array_B, array_B + N);

	bool flag = 1;

	for (int i = 0; i < N; i++)
	{
		if (array_A[i] != array_B[i])
			flag = 0;
	}

	if (flag)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
  
	return 0;
}
