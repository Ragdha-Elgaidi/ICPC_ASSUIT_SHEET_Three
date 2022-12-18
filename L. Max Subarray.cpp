#include <iostream>
using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		int num;

		cin >> num;

		int arr[100000];

		for (int i = 0; i < num; i++)
		{
			cin >> arr[i];
		}

		for (int len = 0; len < num; len++)
		{
			for (int st = len; st<num ; ++st)
			{
				int max = -10e5;
				for (int k = len; k <= st; ++k)
				{
					if (arr[k] > max)
						max = arr[k];
				}
				cout << max << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
