#include <iostream>
#include <vector>
#include<string>
#include <numeric>
#include <limits>

using namespace std;


/*������������������ʵ����ĿҪ��Ĺ���
��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
******************************��ʼд����******************************/
vector < string > splitMsg() {
	string str = "";
	string tmp;
	vector < string > res;
	cin >> tmp;
	int len = tmp.size();
	int k = 1;
	for (int i = 0; i < len; i++)
	{
		if (tmp[i] != '.'  && tmp[i] != ';' && tmp[i] != '!')
		{
			str += tmp[i];
		}
		else
		{
			string crr = "msg";
			crr += char(k);
			crr += ":";
			str = crr + str;
			res.push_back(str);
			k++;
		}
	}
	return res;
}
/******************************����д����******************************/


int main() {
	vector < string > res;


	res = splitMsg();
	for (int res_i = 0; res_i < res.size(); res_i++) {
		cout << res[res_i] << endl;;
	}

	return 0;

}