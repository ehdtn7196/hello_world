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
		//for (int i = 1; i <= n; i++) 자기자신까지 포함한 약수
		for (int i = 1; i < n; i++) // 자기자신을 제외한 약수
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

		//b = b - n; 맨 위의 포문을 바꿔주면서 삭제
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