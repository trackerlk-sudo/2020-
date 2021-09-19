#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int len = str.size();
	int length = 2 * len + 1;
	vector<vector<int>> arr(length, vector<int>(length, 0));

	//��¼�Ƿ��߹�
	int i = len;
	int j = len;
	arr[i][j] = 1;
	int k;
	for (k = 0; k < len; k++)
	{
		if (str[k] == 'N')
		{//��
			j++;
			if (arr[i][j] == 1)
			{
				cout << "True" << endl;
				break;
			}
			arr[i][j] = 1;
		}
		else if (str[k] == 'S')
		{//��
			j--;
			if (arr[i][j] == 1)
			{
				cout << "True" << endl;
				break;
			}
			arr[i][j] = 1;
		}
		else if (str[k] == 'E')
		{//��
			i++;
			if (arr[i][j] == 1)
			{
				cout << "True" << endl;
				break;
			}
			arr[i][j] = 1;
		}
		else
		{//��
			i--;
			if (arr[i][j] == 1)
			{
				cout << "True" << endl;
				break;
			}
			arr[i][j] = 1;
		}
	}
	if (k == len)
	{
		cout << "False" << endl;
	}
	system("pause");
	return 0;
}