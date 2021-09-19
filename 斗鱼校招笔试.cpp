#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

bool isSameStr(string str1, string str2)
{//�ж��Ӵ����Ƿ���ͬһ�࣬�ַ����е��ַ��������һ��������true
	int len1 = str1.size();
	int len2 = str2.size();
	if (len1 != len2) return false;
	map<char, int> mymap1;
	map<char, int> mymap2;
	for (int i = 0; i < len1; i++)
	{
		mymap1[str1[i]]++;
		mymap2[str2[i]]++;
	}

	return mymap1 == mymap2 ? true: false;
}

//int main()
//{
//	int N;
//	cin >> N;
//	vector<string> arr;
//	for (int i = 0; i < N; i++)
//	{
//		string tmp;
//		cin >> tmp;
//		arr.push_back(tmp);
//	}
//	if (N == 1) cout << "1" << endl;
//	vector<string> diffarr;//��Ų�ͬ�����ַ���
//	diffarr.push_back(arr[0]);//�ȷ����һ��
//	int j;
//	for (int i = 1; i < N; i++)
//	{
//		int length = diffarr.size();
//		for (j = 0; j < length; j++)
//		{
//			if (arr[i].size()==diffarr[j].size() && isSameStr(arr[i], diffarr[j]))
//			{//��ͬһ��
//				break;
//			}
//		}
//		if (j == length)
//		{//�����궼����ͬһ�࣬��������
//			diffarr.push_back(arr[i]);
//		}
//	}
//	cout << diffarr.size() << endl;
//	system("pause");
//	return 0;
//}

int main()
{
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	int len1 = str1.size();
	int len2 = str2.size();
	string::iterator it = find(str2.begin(), str2.end(), '*');
	if (it == str2.end())
	{//û��*����ô���������һ�£���϶���ƥ��
		if (len1 != len2)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	if (len2 == 2 && str2[0] == '.' && str2[1] == '*')
	{
		cout << "YES" << endl;
	}
	system("pause");
	return 0;
}