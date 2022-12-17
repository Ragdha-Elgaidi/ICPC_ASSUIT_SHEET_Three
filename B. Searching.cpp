#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int Array[100000], num2;

	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
	}
	
	cin >> num2;

	bool flag = false;
	for (int i = 0; i < N; i++)
	{
		if (num2 == Array[i])
		{
			cout << i << endl;
			flag = true;
			break;
		}
	}

	if (!flag)
		cout << -1 << endl;

	return 0;
}
