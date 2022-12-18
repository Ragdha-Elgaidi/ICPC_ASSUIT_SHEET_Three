#include <iostream>
using namespace std;

int main()
{
	int n , mn=10e5;
	
	cin >> n;

	int array[10000];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];

		if (mn > array[i])
		{
			mn = array[i];
		}
	}

	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] == mn)
		{
			counter++;
		}
	}

	if (counter % 2 == 0)
		cout << "Unlucky" << endl;
	else
		cout << "Lucky" << endl;

}
