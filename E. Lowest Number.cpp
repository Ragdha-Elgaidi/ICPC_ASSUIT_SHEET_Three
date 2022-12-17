#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N , s=10e5;

	cin >> N;

	int A[10000];

	int posi = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];

		if (A[i] < s)
		{
			s = A[i];
			posi = i + 1;
		}
	 }

	cout<< s << " " << posi  << endl;

	return 0;
}
