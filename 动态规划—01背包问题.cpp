#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//01�������⣨ѡ���߲�ѡ��

//int main()
//{
//	int N,V;
//	cin >> N >> V;
//	vector<vector<int>> arr(N, vector<int>(2, 0));
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i][0] >> arr[i][1];
//	}
//	vector<vector<int>> dp(N + 1, vector<int>(V + 1, 0));
//	//����ǰi����Ʒ���������Ϊj�����ı��������ܻ�õ�����ֵ
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= V; j++)
//		{
//			dp[i][j] = dp[i - 1][j];//��ǰ����װ���¸���Ʒ��װ���²ſ���װ���߲�װ
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

int main()
{
	int N, V;
	cin >> N >> V;
	vector<vector<int>> arr(N, vector<int>(2, 0));
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	vector<int> dp(V + 1,0);
	for (int i = 0; i <N; i++)
	{
		for (int j = V; j >=arr[i][0]; j--)
		{
			dp[j] = max(dp[j], dp[j - arr[i][0]] + arr[i - 1][1]);
		}
	}
	cout << dp[V] << endl;
	system("pause");
	return 0;
}