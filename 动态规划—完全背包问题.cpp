#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//��ȫ�������⣺ÿ����Ʒ��ѡ������
//
//int main()
//{
//	int N, V;
//	cin >> N >> V;
//	vector<vector<int>> arr(N, vector<int>(2, 0));
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i][0] >> arr[i][1];
//	}
//	vector<vector<int>> dp(N + 1, vector<int>(V + 1, 0));
//	//����ǰi����Ʒ���������Ϊj�����ı��������ܻ�õ�����ֵ
//
//	//for (int i = 1; i <= N; i++)
//	//{
//	//	for (int j = 1; j <= V; j++)
//	//	{
//	//		for (int k = 0; j >= k*arr[i - 1][0]; k++)
//	//		{//��ǰ��Ʒ����ȡk����
//	//			dp[i][j] = max(dp[i][j], dp[i - 1][j - k*arr[i - 1][0]] + k*arr[i - 1][1]);
//	//		}
//	//	}
//	//}
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j <= V; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= arr[i - 1][0])
//			{
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - arr[i - 1][0]] + arr[i - 1][1]);
//			}
//		}
//	}
//	cout << dp[N][V] << endl;
//	system("pause");
//	return 0;
//}

