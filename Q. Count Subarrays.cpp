#include<iostream>
using namespace std;

int main()
{
	int T;

	cin >> T;

	while (T--)
	{
		int N;

		cin >> N;

		int arr[10000];

		for (int i = 0; i < N; i++)
			cin >> arr[i];

		int result = 0;
		int len = 1;

		for (int i = 1; i <N; i++)
		{
			if (arr[i - 1] <= arr[i])
			{
				result += len;
				++len;
			}
			else
				len = 1;
		}

		cout << result + N << endl;
  }
  
	return 0;
}
