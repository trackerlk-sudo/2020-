//������ִ�
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.size();

	vector<vector<int>> dp(len, vector<int>(len, 0));
	//dp[i][j]��ʾstr[i]��str[j]�Ƿ��ǻ����Ӵ�
	for (int i = 0; i < len; i++)
	{
		dp[i][i] = 1;
	}

	int max_len = 1;//��ĳ���
	for (int i = len - 2; i >= 0; i--)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (str[i] == str[j])
			{//��ȣ����м��
				if (j - i < 3)
				{
					dp[i][j] = 1;
				}
				else
				{
					dp[i][j] = dp[i + 1][j - 1];
				}
			}
			else
			{//�����
				continue;
			}

			max_len = max(max_len, j - i + 1);
		}
	}

	cout << max_len << endl;
	//system("pause");
	return 0;
}




//������ִ�
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.size();

	vector<vector<int>> dp(len, vector<int>(len, 0));
	//dp[i][j]��ʾstr[i]��str[j]�Ƿ��ǻ����Ӵ�
	for (int i = 0; i < len; i++)
	{
		dp[i][i] = 1;
	}

	int max_len = 1;//��ĳ���
	for (int i = len - 2; i >= 0; i--)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (str[i] == str[j])
			{//��ȣ����м��
				if (j - i < 3)
				{
					dp[i][j] = 1;
				}
				else
				{
					dp[i][j] = dp[i + 1][j - 1];
				}
			}
			else
			{//�����
				continue;
			}
			//max_len = max(max_len, j - i + 1);
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (dp[i][j] == 1)
			{
				if (j - i + 1 > max_len)
				{
					max_len = j - i + 1;
				}
			}
		}
	}
	cout << max_len << endl;
	//system("pause");
}