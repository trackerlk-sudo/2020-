#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


/*����Сǿ��n������������i����������ʼ����a[i]ֻС����Сǿ��ÿ��������ÿ�춼������kֻС��������ÿ�������ʱ��
��������������������������һ���С����������ǰ������������xֻС�������������󣬵�ǰ��������ʣ��x / 2ֻ��
���㾭��m���Сǿ��n����������һ���ж���ֻС��

����������

��һ����������������n��m��k
�ڶ�������n�����������ֱ��ʾn����������ʼ���ĸ���
1 <= m <= 100000
1 <= n <= 100000
1 <= k <= 10000
1 <= a[i] <= 100000

���������

���һ��������ʾ��
ʾ��1��

����

3 3 100
100 200 400

���

925*/

//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	vector<int> arr(n,0);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	//sort(arr.begin(), arr.end());//������
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr[j] += k;//ÿ��������kֻ
//		}
//		sort(arr.rbegin(), arr.rend());//������,�Ӵ�С��
//		arr[0] /= 2;//���ļ���
//	}
//	int sum = 0;//���
//	for (int i = 0; i < arr.size(); i++)
//	{
//		sum += arr[i];
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}

/*����Сǿ������n���ڵ㣬�����������������ж����ֲ�ͬ�Ķ���������ڵ����Ϊn�����ĸ߶Ȳ�����m�ķ�����
��Ϊ�𰸺ܴ����Դ���Ҫģ�� 1e9+7����������ĸ߶ȶ���Ϊ����Ҷ�ӵ���·���Ͻڵ���������ֵ��

����������

��һ����������������n��m
1<=m<=n<=50

���������

���һ���𰸱�ʾ������


ʾ���� ���� 3 3 �� ��� 5*/

const int mod = 1e9 + 7;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	//dp[i][j]��ʾi���ڵ㣬������j��ķ�����
	for (int i = 0; i <= m; i++)
	{
		dp[0][i] = 1;//0���ڵ㣬�����κεĶ��ǿսڵ�
	}

	for (int i = 1; i <= n; i++)
	{//dp���
		for (int j = 1; j <= m; j++)
		{
			for (int k = 0; k < i; k++)
			{//k��ʾk���ڵ�����ߣ��ұߣ�
				dp[i][j] = (dp[i][j] % mod + dp[k][j - 1] * dp[i - k - 1][j - 1] % mod) % mod;
				//ȥ��һ�����ڵ㣬k���ڵ�����߹��ɲ�����j-1��ķ�����dp[k][j-1]*ʣ�µ�i-k-1���ڵ����ұ߹��ɲ�����j-1�㷽����dp[i-k-1][j-1]
				//k���δ�0��i-1���ӣ��ۼ����з���
			}
		}
	}
	cout << dp[n][m] << endl;
	system("pause");

	return 0;
}


//const int mod = 1e9 + 7;
//vector<vector<long long int>> dp(55, vector<long long int>(55, 0));
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		dp[0][i - 1] = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 0; k < j; k++)
//			{
//				dp[j][i] = (dp[j][i] % mod + dp[k][i - 1] * dp[j - k - 1][i - 1] % mod) % mod;
//			}
//		}
//	}
//	cout << dp[n][m] << endl;
//	system("pause");
//
//	return 0;
//}
