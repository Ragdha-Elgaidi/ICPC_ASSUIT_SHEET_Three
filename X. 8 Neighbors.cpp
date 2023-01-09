#include<iostream>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
    char  arr[101][101];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int x, y;

	cin >>x >> y;

	if (arr[x][y + 1] != '.' &&arr[x - 1][y] != '.' &&arr[x + 1][y] != '.' &&
		arr[x - 1][y] != '.' &&arr[x- 1][y+ 1] != '.' &&arr[x + 1][y- 1] != '.' &&
		arr[x+ 1][y+ 1] != '.' && arr[x - 1][y - 1] != '.')
	{
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}
