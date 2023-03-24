#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int A, B;

    cin >> A;
    cin >> B;

    vector<vector<int>> array(A, vector<int>(B));
    int i, j;

    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
        {
            array[i][j] += 1;
        }
    }

    int r, c;
    int count = 0;
    for (r = 0;r < A;r++)
    {
        for (c = 0;c < B;c++)
        {
            if (array[r][c] == 1)
            {
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}