#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<list>

using namespace std;
//һ���ַ��������ܷ�ͨ��ɾ��һ���ַ��������Ϊ���Ĵ�������ʼ��ɾ���ַ��������ɵĻ��Ĵ�����������false
//bool ishw(string s)
//{//�ж�һ���ַ����Ƿ��ǻ��Ĵ�
//	int i = 0;
//	int j = s.size() - 1;
//	while (i < j)
//	{
//		if (s[i] != s[j])
//		{
//			return false;
//		}
//		i++;
//		j--;
//	}
//	return true;
//}
//int main()
//{
//	string str;
//	cin >> str;
//	int len = str.size();
//	int flag = 0;
//	for (int i = 0; i < len; i++)
//	{
//		string pre = str.substr(0, i);
//		string next = str.substr(i + 1, len);
//		string nstr = pre + next;
//		if (ishw(nstr))
//		{
//			cout << nstr << endl;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "false" << endl;
//	}
//	system("pause");
//	return 0;
//}


//�ļ���������
class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	* ����˳��
	* @param input string�ַ���
	* @return string�ַ���
	*/
	string compileSeq(string input) {
		// write code here
		int len = input.size();
		vector<int> arr;
		for (int i = 0; i < len; i = i + 2)
		{
			arr.push_back(input[i]-'0');
		}

		list<int> mylist;
		mylist.push_front(0);
		mylist.push_front(1);
		mylist.push_front(2);
		mylist.push_front(3);

		for (int i = 0; i <4; i++)
		{
			if (arr[i] >=4 )
			{
				continue;//������
			}
			else
			{

				mylist.remove(arr[i]);
				mylist.push_front(arr[i]);
			}		
		}
		string result = "";
		for (auto it=mylist.begin(); it!=mylist.end(); it++)
		{
			result +=to_string(*it);
			result += ",";
		}
		result = result.substr(0, result.size() - 1);
		return result;
	}
};

int main()
{
	Solution p;
	string str = "1,2,4,1";

	cout<<p.compileSeq(str)<<endl;
	system("pause");
	return 0;
}