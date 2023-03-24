#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int main()
{
	array<array<int, 100>, 100> array;

	int i, j, k, x, y;
	int N;
	int a, b;
	int count = 0;

	for (i = 0; i < 100; ++i)
	{
		for (j = 0; j < 100; ++j)
		{
			array[i][j] = 0;
		}
	}

	cin >> N;

	for (k = 0; k < N; k++)
	{
		cin >> a >> b;

		for (i = a; i < a + 10; i++)
		{
			for (j = b; j < b + 10; j++)
			{
				if (array[i][j] == 0)
				{
					array[i][j] = 1;
				}
			}
		}
	}
	for (x = 0; x < 100; ++x)
	{
		for (y = 0; y < 100; ++y)
		{
			if (array[x][y] == 1)
			{
				count += 1;
			}
		}
	}

	cout << count << endl;

	return 0;
}