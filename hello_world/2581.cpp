#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool prime(int n)
{
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	int M, N;
	cin >> M;
	cin >> N;

	int sum = 0;
	int minprime = -1;

	for (int i = M; i <= N; i++)
	{
		if (prime(i))
		{
			sum += i;
			if (minprime == -1)
			{
				minprime = i;
			}
		}
	}

	if (minprime != -1)
	{
		cout << sum << endl;
		cout << minprime << endl;
	}

	else
	{
		cout << -1 << endl;
	}

	return 0;
}