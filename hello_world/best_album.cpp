#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;

    for (int i = 0;i < genres.size();i++) {

        cout << genres[i] << " ";

    }

    cout << endl;

    for (int i = 0;i < plays.size();i++) {

        cout << plays[i] << " ";

    }

    return answer;
}