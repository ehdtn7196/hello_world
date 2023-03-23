//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int N, word_count = 0;
//	string Word;
//
//	cin >> N;
//
//	if (N <= 2)
//	{
//		cout << N << endl;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cin >> Word;
//		bool group_word = true;
//		for (int j = 0; j < Word.length() - 1; j++)
//		{ 
//			if (Word[j] != Word[j + 1])
//			{
//				char new_word = Word[j + 1];
//				if (Word.find(new_word, j + 1) != string::npos)
//				{
//					group_word = false;
//					break;
//				    
//				}
//			}
//		}
//		if (group_word)
//		{
//			word_count++;
//		}
//	}
//	cout << word_count << endl;
//
//	return 0;
//}
// 두글자나 한글자인 경우 추가
//
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int N, word_count = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string Word;
        cin >> Word;

        if (Word.length() <= 2) // 단어의 길이가 2 이하인 경우
        {
            word_count++;
            continue;
        }

        bool group_word = true;
        bool used[26] = { false }; // 알파벳 사용 여부 초기화

        for (int j = 0; j < Word.length(); j++)
        {
            if (!used[Word[j] - 'a']) // 처음 나온 알파벳이면
            {
                used[Word[j] - 'a'] = true; // 사용했다고 표시
            }
            else // 이미 사용한 알파벳이면
            {
                if (Word[j] != Word[j - 1]) // 전에 나온 알파벳과 다르면
                {
                    group_word = false;
                    break;
                }
            }
        }

        if (group_word)
        {
            word_count++;
        }
    }

    cout << word_count << endl;

    return 0;
}
//
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//    int N, word_count = 0;
//
//    cin >> N;
//
//    for (int i = 0; i < N; i++)
//    {
//        string Word;
//        cin >> Word;
//
//        if (Word.length() <= 2) // 단어의 길이가 2 이하인 경우
//        {
//            word_count++;
//            continue;
//        }
//
//        bool is_group_word = true;
//        int count[26] = { 0 }; // 알파벳 사용 횟수 초기화
//
//        for (int j = 0; j < Word.length(); j++)
//        {
//            if (j == 0 || Word[j] == Word[j - 1]) // 첫 번째 알파벳 또는 이전 알파벳과 같은 경우
//            {
//                count[Word[j] - 'a']++;
//            }
//            else // 이전 알파벳과 다른 경우
//            {
//                if (count[Word[j - 1] - 'a'] > 1) // 이전 알파벳이 두 번 이상 나온 경우
//                {
//                    is_group_word = false;
//                    break;
//                }
//                count[Word[j - 1] - 'a'] = 1; // 초기화
//                count[Word[j] - 'a']++; // 현재 알파벳 카운트
//            }
//        }
//
//        if (is_group_word)
//        {
//            word_count++;
//        }
//    }
//
//    cout << word_count << endl;
//
//    return 0;
//}