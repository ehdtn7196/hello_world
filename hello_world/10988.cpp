#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string N;
	cin >> N;

	int len = N.length();

	bool palindrome = true;
	for (int i = 0; i < len / 2; i++)
	{
		if (N[i] != N[len - 1 - i])
		{
			palindrome = false;
			break;
		}
	}

	if (palindrome)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}