#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n == -1) break;

		vector<int> a;
		//for (int i = 1; i <= n; i++) �ڱ��ڽű��� ������ ���
		for (int i = 1; i < n; i++) // �ڱ��ڽ��� ������ ���
		{
			if (n % i == 0)
			{
				a.push_back(i);
			}
		}

		int b = 0;
		for (int i = 0; i < a.size(); i++)
		{
			b += a[i];
		}

		//b = b - n; �� ���� ������ �ٲ��ָ鼭 ����
		if (b == n)
		{
			cout << n << " = ";
			for (int i = 0; i < a.size(); i++)
			{
				cout << a[i];
				if (i < a.size() - 1)
				{
					cout << " + ";
				}
			}
			cout << endl;

		}
		else
		{
			cout << n << " is NOT perfect." << endl;
		}
	}
		
		return 0;

}