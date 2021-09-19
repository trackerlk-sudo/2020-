#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;



bool isValid(string s) {
	int len = s.length();
	stack<char> st;
	if (len == 0) return true;
	for (int i = 0; i<len; i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			st.push(s[i]);
		}
		else//�����ұߵ�������
		{
			if (!st.empty() && charof(s[i]) == st.top())
			{
				st.pop();//����
			}
			else return false;
		}
	}
	if (!st.empty()) return false;
	return true;
}
char charof(char c)//��������Ӧ��Ϊ������
{
	if (c == ')') return '(';
	if (c == '}') return '{';
	return '[';
}

int main() 
{
	string str;
	getline(cin, str);
	if(isValid(str))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	return 0;
}