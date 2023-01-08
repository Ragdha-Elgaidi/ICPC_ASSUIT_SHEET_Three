#include<iostream>
using namespace std;

int main()
{
	int n, q;

	cin >> n >> q;

	int freq[100001] = { 0 };

	int arr[100000];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		freq[arr[i]]++;
	}
	for (int i = 1; i <= q; i++)
	{
		cout << freq[i] << endl;
	}
	return 0;
}
