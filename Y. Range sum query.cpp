#include<iostream>
using namespace std;

int main()
{
	long long N, Q;

	cin >> N >> Q; 

	long long arr1[N]; 
	long long arr2[N]; 

	for (int i = 0; i < N; i++)
	{
		cin >> arr1[i];

		if (i == 0)
		{
			arr2[i] = arr1[i];
		}
		else
		{
			arr2[i] = arr1[i] + arr2[i - 1];
		}
	}
	while (Q--)
	{ 

		long long start, end;

		cin >> start >> end;

		start--;
		end--;

		long long  sum = arr2[end] - arr2[start] + arr1[start];

		cout << sum << endl;
	}
  return 0;
}
