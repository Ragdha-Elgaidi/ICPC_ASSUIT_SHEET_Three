#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int l, int h, int element)
{
	while (l <= h) 
	{
		int m = (l + h) / 2;

		if (arr[m] == element)
			return m;
		if (arr[m] > element)
			h = m - 1;
		else
			l = m + 1;
	}
	return -1;
}

int main()
{
	int N, Q;

	cin >> N >> Q;

	int arr[100000];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr+N);

	int num;

	while(Q--)
	{
		cin >> num;
		int result = binarySearch(arr, 0, N - 1, num);
		if (result == -1)
			cout << "not found" << endl;
		else
			cout << "found" << endl;

	}
	
	return 0;
}
