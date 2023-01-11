#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	long long arr[10000];
	bool flag = 1;
	int counter = 0;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 != 0)
		{ 
			cout << 0 << endl;
			return 0;
		}
	}

	while (flag)
	{
		for (int i = 0; i < N; i++)
		{
			if (arr[i] % 2 == 0)
			{
				arr[i] = arr[i] / 2;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		counter++;
	}

	cout << counter-1 << endl;

	return 0;
}
