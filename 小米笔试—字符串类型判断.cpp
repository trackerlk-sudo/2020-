#include<iostream>
#include<string>
#include<vector>

using namespace std;

//�ж��ַ��Ƿ�Ϸ�
int juage(string str)
{
	if (str.size() < 8 || str.size() > 120)
	{
		return 1;
	}
	int i = 0;
	vector<int> arr(4, 0);//�ֱ��¼���֡���д��ĸ��Сд��ĸ������
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i]-'0'>= 0 && str[i] - '0' <= 9)
		{
			arr[0] = 1;
		}
		else if (str[i]-'A' >= 0 && str[i]-'A' <= 26)
		{
			arr[1] = 1;
		}
		else if (str[i]-'a'>= 0 && str[i]-'a'  <=26)
		{
			arr[2] = 1;
		}
		else{//�����ַ�
			arr[3] = 1;
		}
	}

	for (int j = 0; j < 4; j++)
	{
		if (arr[j] == 0)
		{
			return 2;
		}
	}
	return 0;
}

int main()
{
	//���԰���
	/*char c;
	cin >> c;
	if (c-'A'>=0 && c -'A'<= 26)
	{
		cout << "��д��ĸ" << endl;
	}
	else if (c-'a' >= 0 && c-'a'<=26)
	{
		cout << "Сд��ĸ"<< endl;
	}
	else if (c-'0'>= 0 && c-'0'<=9)
	{
		cout << "����" << endl;
	}
	else {
		cout << "�����ַ�" << endl;
	}*/
	string str;
	vector<string> arr;
	while (cin >> str)
	{
		arr.push_back(str);
	}
	cout << arr.size() << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
	int len = arr.size();
	for (int i = 0; i < len; i++)
	{
		int tmp = juage(arr[i]);
		if (tmp == 0)
		{
			cout << 0 << endl;
		}
		else if (tmp == 1)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 2 << endl;
		}
	}
	system("pause");
	return 0;
}

