#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;

    string input;
    getline(cin, input);
    stringstream ss(input);
    string genre;

    while (getline(ss, genre, ' '))
    {
        genres.push_back(genre);
    }

    int n = genres.size();
    vector<int> plays(n);
    for (int i = 0; i < n; i++)
    {
        cin >> plays[i];
    }

    map<string, int> play_sum;
    for (int i = 0; i < n; i++)
    {
        play_sum[genres[i]] += plays[i];
    }

    vector<pair<string, int>> genre_play_sum(play_sum.begin(), play_sum.end());
    sort(genre_play_sum.begin(), genre_play_sum.end(), [](const auto& lhs, const auto& rhs)
        {return lhs.second > rhs.second;});

    string first_genre = genre_play_sum[0].first;
    string second_genre = genre_play_sum[1].first;




    return answer;
}