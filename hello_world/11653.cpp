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

	while (i * i <= N) // i������ N���� �۰ų� ���� �� ����
	{
		for (; N % i == 0; N /= i) // N % i �� 0�̶�� i�� ��� ��������
		{
			cout << i << endl; // ���μ� ���
		}
		i++; // i�� 1�� ������
	}

	if (N > 1) // ������ ���μ�(2,3�� ���� ����)
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