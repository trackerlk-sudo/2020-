#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	int N,M;
	cin >> N >> M;
	vector<vector<int>> arr(M, vector<int>(2, 0));
	int flag = 0;
	int k = -1;//��¼�°࿨��ʼ��λ��
	for (int i = 0; i < M; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
		if (flag == 0 && arr[i][1] == 0)
		{
			flag = 1;
			k = i;
		}
	}//������������
	if (arr[M - 1][1] == 1)
	{//ȫ���ϰ࿨
		set<int> myset;
		vector<int> res1;
		res1.push_back(arr[0][0]);//��һ��Ҳ������
		myset.insert(arr[0][0]);
		for (int i = 0; i < M; i++)
		{
			myset.insert(arr[i][0]);
		}

		for (int i = 1; i <= N; i++)
		{
			if (myset.find(i) == myset.end())
			{
				res1.push_back(i);
			}
		}
		for (int i = 0; i < res1.size(); i++)
		{
			cout << res1[i] <<" ";
		}
	}
	else if (arr[0][1] == 0)
	{//ȫ���°࿨
		set<int> myset2;
		vector<int> res2;
		res2.push_back(arr[M-1][0]);//���һ��Ҳ������
		myset2.insert(arr[0][0]);
		for (int i = 0; i < M; i++)
		{
			myset2.insert(arr[i][0]);
		}

		for (int i = 1; i <= N; i++)
		{
			if (myset2.find(i) == myset2.end())
			{
				res2.push_back(i);
			}
		}
		for (int i = 0; i < res2.size(); i++)
		{
			cout << res2[i] <<" ";
		}
	}
	else
	{//���°࿨����
		//�ϰ࿨

		/*vector<int> arr2;
		vector<int> res3;
		set<int> myset3;
		myset3.insert(arr[0][0]);
		res3.push_back(arr[0][0]);
		for (int i = 0; i < M && arr[i][1] == 1; i++)
		{
			if (myset3.find(arr[i][0]) == myset3.end())
			{
				arr2.push_back(arr[i][0]);
				myset3.insert(arr[i][0]);
			}
		}
		for (int i = 1; i <=N ; i++)
		{
			if (myset3.find(i) == myset3.end())
			{
				res3.push_back(i);
			}
		}

		for (int i = 0; i < res3.size(); i++)
		{
			cout << res3[i] << " ";
		}*/
	}
	//system("pause");
	return 0;	
}