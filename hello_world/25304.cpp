#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int X, N, a, b, c = 0;

	cin >> X;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		//cin >> a, b;
		cin >> a >> b;
		c += a * b;

	}

	if (X > 1000000000 || X < 1 || N > 100 || N < 1 || a > 1000000 || a < 1 || b > 10 || b < 1)
	{
		cout << "out of range" << endl;
		return 0;
	}
	else
	{
		if (c == X)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		return 0;
	}
}