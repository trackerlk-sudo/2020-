#include<iostream>
#include<string>

using namespace std;

string func(string str)
{
	int countA = 0;//a�ĸ���
	string res = "";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a')
		{
			countA++;
		}
		else if (str[i] == 'b')
		{
			continue;
		}
		else if (str[i] == 'c')
		{
			if (countA == 0)
			{//ǰ��ûa
				res += "c";
			}
			else {
				countA--;
			}
		}
		else {//�����ַ�
			while (countA)
			{//��Ҫ���ٸ�aû������ģ���Ҫ����
				res += 'a';
				countA--;
			}
			res += str[i];
		}
	}
	while (countA)
	{
		res += "a";
		countA--;
	}
	return res;
}


int a = 0;
void func1()
{
	a++;
}

void func2()
{
	a++;
}

int main()
{
	string str;
	getline(cin, str);
	string res = func(str);
	cout << res << endl;


	system("pause");
	return 0;
}