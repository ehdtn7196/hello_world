#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    double a, b = 0;
    double total_credits = 0;
    string input_line;
    string course, S;

    for (int i = 0; i < 20; i++)
    {
        /*getline(cin, input_line);*/
        //istringstream iss(input_line);
        cin >> course >> a >> S;

        if (S == "P")
        {
            continue;
        }
        else if (S == "A+")
        {
            b += a * 4.5;
        }
        else if (S == "A0")
        {
            b += a * 4;
        }
        else if (S == "B+")
        {
            b += a * 3.5;
        }
        else if (S == "B0")
        {
            b += a * 3;
        }
        else if (S == "C+")
        {
            b += a * 2.5;
        }
        else if (S == "C0")
        {
            b += a * 2;
        }
        else if (S == "D+")
        {
            b += a * 1.5;
        }
        else if (S == "D0")
        {
            b += a * 1;
        }
        else if (S == "F")
        {
            b += a * 0;
        }

        total_credits += a;
    }

    if (total_credits != 0)
    {
        double avg = b / total_credits;
        cout << avg << endl;
    }
    else
    {
        cout << "No data input" << endl;
    }

    return 0;
}
