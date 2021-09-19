#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//���ӱ�����Ӯ�˵ĵ�3�֣���Ĳ��÷֣�ƽ�����Ӹ�һ��;�ʸ���һ���ȷ�a:b,������Ҫ���ٳ���������������ܳ��ָñȷ֣��򷵻�-1
int mincompetion(int a, int b)
{
	vector<vector<int>> dp(a + 1, vector<int>(b + 1, -1));
	dp[0][0] = 0;

	//��ʼ�� 0 1 2��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= b; j++)
		{
			if (i == j)
			{
				dp[i][j] = i;
			}
			if (j < 3)
			{
				continue;
			}
			if (j % 3 == i)
			{
				dp[i][j] = dp[i][j - 3] + 1;
			}
		}
	}

	//��ʼ����
	for (int j = 0; j < 3 && j<b+1; j++)
	{
		for (int i = 3; i <=a; i++)
		{
			if (i % 3 == j)
			{
				dp[i][j] = dp[i-3][j] + 1;
			}
		}
	}

	for (int i = 3; i <=a; i++)
	{
		for (int j = 3; j <=b; j++)
		{//�������ȥ����
			int a = min((dp[i - 1][j - 1]==-1?INT_MAX: dp[i - 1][j - 1]), min((dp[i - 3][j]==-1?INT_MAX: dp[i - 3][j]), (dp[i][j - 3]==-1?INT_MAX: dp[i][j - 3])));
			if (a == INT_MAX)
			{
				continue;
			}
			else
			{
				dp[i][j] = a + 1;
			}
		}
	}
	return dp[a][b];
}

int main()
{
	cout << mincompetion(4,10) << endl;
	system("pause");
	return 0;
}


//�жϾ����Ƿ�Գ�
//bool func(vector<vector<int>>& arr)
//{
//	for (int i = 0; i < arr.size(); i++)
//	{
//		for (int j = 0; j < arr.size(); j++)
//		{
//			if (arr[i][j] != arr[j][i])
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<vector<int>> arr(N, vector<int>(N, 0));
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	if (func(arr))
//	{
//		cout << "Yse!" << endl;
//	}
//	else
//	{
//		cout << "No!" << endl;
//	}
//	return 0;
//}