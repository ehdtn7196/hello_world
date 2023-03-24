#include<algorithm>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	istringstream iss(input);
	int num;
	int count = 0;
	vector<int> lst;

	while (iss >> num)
	{
		count++;

		if (count % 6 == 1 || count % 6 == 2)
		{
			num = 1 - num;
		}
		else if (count % 6 == 3 || count % 6 == 4 || count % 6 == 5)
		{
			num = 2 - num;
		}
		else if (count % 6 == 0)
		{
			num = 8 - num;
		}

		lst.push_back(num);
	}

	for (int i = 0; i < lst.size(); i++)

	{
		cout << lst[i] << " ";
	}
	
	return 0;
}