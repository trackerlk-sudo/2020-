#include<iostream>
#include<vector>
#include<map>

using namespace std;
//�����ά���飬���ĳһ�еĶ�Ӧ������һ�еĶ�Ӧ�еĺͶ���ȣ�����Ϊ��������
/*���磺 3 3(������)
         1 2 4
	     4 3 1
		 5 2 3
		 */
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	return 0;
//}


//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int a[15];
//	int ans = 0;
//	map<vector<int>, int> mymap;//keyΪvector��value��ֵ
//	for (int i = 0; i < n; i++)
//	{//n��
//		vector<int> arr;
//		for (int j = 1; j <= k; j++)
//		{
//			cin >> a[j];//k������10,����15��С���������δ��
//		}
//		for (int j = 2; j <= k; j++)
//		{
//			arr.push_back(a[j] - a[j - 1]);//�����ֵ
//		}
//		ans += mymap[arr];
//		for (int j = 0; j < arr.size(); j++)
//		{
//			arr[j] = -arr[j];//��Ϊ��ֵ
//		}
//		mymap[arr]++;
//
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}

//�Ľ�����������map��ӳ��vector������ֵ
//�����Ӧ����Ӻ���ȣ���ô���ڵĲΪ�෴��
int main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> arr(n,vector<int>(k, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> arr[i][j];
		}
	}//��������

	int count = 0;//��������
	map<vector<int>,int> mymap;//ӳ���ϵ����ֵΪ�෴��������Ϊ��������

	for (int i = 0; i < n; i++)
	{
		vector<int> ans;//�����ֵ
		for (int j = 1; j < n; j++)
		{
			ans.push_back(arr[i][j] - arr[i][j - 1]);
		}
		count+= mymap[ans];
		for (int v = 0; v < ans.size(); v++)
		{//ȡ�෴��
			ans[v] = -ans[v];
		}
		mymap[ans]++;//����map����
	}
	cout << count << endl;
	system("pause");
	return 0;
}


//��������ʱ
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<vector<int>> arr(n,vector<int>(k, 0));
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int sum = arr[i][0] + arr[j][0];
//			int k;
//			for (k = 1; k < arr[i].size(); k++)
//			{
//				if (arr[i][k] + arr[j][k] != sum)
//				{
//					break;
//				}
//			}
//			if (k == arr[i].size())
//			{
//				count++;
//			}
//				
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}



