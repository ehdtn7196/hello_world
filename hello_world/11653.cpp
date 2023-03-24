#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int N, i;
	int count = 0;
	cin >> N;
	i = 2;

	while (i * i <= N) // i제곱이 N보다 작거나 같을 때 까지
	{
		for (; N % i == 0; N /= i) // N % i 가 0이라면 i로 계속 나눌동안
		{
			cout << i << endl; // 소인수 출력
		}
		i++; // i에 1씩 더해줌
	}

	if (N > 1) // 마지막 소인수(2,3에 대한 과정)
	{
		cout << N << endl;
	}
	return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int N, i;
	int count = 0;
	cin >> N;

	for (i = 2; i * i <= N; i++)

	{
		while (N % i == 0)
		{
			cout << i << endl;
			N /= i;
		}
	}

	if (N > 1)
	{
		cout << N << endl;
	}
	return 0;
}