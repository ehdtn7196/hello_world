#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{

	int a = 0, b = 0;
	int N;
	char C;
	string S;

	for (int i = 0; i < 20; i++)
	{

		cin >> C >> N >> S;

		a += N;
		if (S == "P")
		{
			a -= N;
			b -= N;
		}
		else if (S == "A+")
		{
			N = N * 4.5;
		}
		else if (S == "A0")
		{
			N = N * 4;
		}
		else if (S == "B+")
		{
			N = N * 3.5;
		}
		else if (S == "B0")
		{
			N = N * 3;
		}
		else if (S == "C+")
		{
			N = N * 2.5;
		}
		else if (S == "C0")
		{
			N = N * 2;
		}
		else if (S == "D+")
		{
			N = N * 1.5;
		}
		else if (S == "D0")
		{
			N = N * 1;
		}
		else if (S == "F")
		{
			N = N * 0;
		}


		b += N;

		if (a != 0)
		{
			int c = 0;
			c += static_cast<int>(b / a);
			cout << c << endl;
		}
	}


	return 0;
}