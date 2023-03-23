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
// �α��ڳ� �ѱ����� ��� �߰�
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

        if (Word.length() <= 2) // �ܾ��� ���̰� 2 ������ ���
        {
            word_count++;
            continue;
        }

        bool group_word = true;
        bool used[26] = { false }; // ���ĺ� ��� ���� �ʱ�ȭ

        for (int j = 0; j < Word.length(); j++)
        {
            if (!used[Word[j] - 'a']) // ó�� ���� ���ĺ��̸�
            {
                used[Word[j] - 'a'] = true; // ����ߴٰ� ǥ��
            }
            else // �̹� ����� ���ĺ��̸�
            {
                if (Word[j] != Word[j - 1]) // ���� ���� ���ĺ��� �ٸ���
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
//        if (Word.length() <= 2) // �ܾ��� ���̰� 2 ������ ���
//        {
//            word_count++;
//            continue;
//        }
//
//        bool is_group_word = true;
//        int count[26] = { 0 }; // ���ĺ� ��� Ƚ�� �ʱ�ȭ
//
//        for (int j = 0; j < Word.length(); j++)
//        {
//            if (j == 0 || Word[j] == Word[j - 1]) // ù ��° ���ĺ� �Ǵ� ���� ���ĺ��� ���� ���
//            {
//                count[Word[j] - 'a']++;
//            }
//            else // ���� ���ĺ��� �ٸ� ���
//            {
//                if (count[Word[j - 1] - 'a'] > 1) // ���� ���ĺ��� �� �� �̻� ���� ���
//                {
//                    is_group_word = false;
//                    break;
//                }
//                count[Word[j - 1] - 'a'] = 1; // �ʱ�ȭ
//                count[Word[j] - 'a']++; // ���� ���ĺ� ī��Ʈ
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