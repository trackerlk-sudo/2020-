#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

//int main()
//{
//	int M;
//	cin >> M;
//	//vector<string> arr;
//	map<string, int> mymap;
//	for (int i = 0; i < M; i++)
//	{//��������
//		string tmp;
//		cin >> tmp;
//		//arr.push_back(tmp);
//		mymap[tmp]++;
//	}
//	int count = 0;
//	for (map<string, int>::iterator it = mymap.begin(); it != mymap.end(); it++)
//	{
//		double freq = ((it->second)*1.00) / (M*1.00);//����Ƶ��
//		if (freq >= 0.01)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int E, EM, M, MH, H;
//	cin >> E >> EM >> M >> MH >> H;
//	int tmp1 = M + EM;
//	int tmp2 = H+MH;
//	//������� EM��MM��EH��MH
//	int res=-1;
//	for (int i = 0; i <= EM; i++)
//	{//��i����E��ʣ�µ�EM-i����M
//		for (int j = 0; j <= MH; j++)
//		{//��j����M��ʣ�µ�MH-j����H
//			int count = min(E + i, min(tmp1-i+j,tmp2-j));
//			res = max(res, count);
//		}
//	}
//	cout << res<< endl;
//
//	system("pause");
//	return 0;
//}
vector<int> select = {2,6};
void DFS(int area, int count, int crrarea, vector<int>& select)
{
	if (crrarea >= area)
	{
		if (crrarea == area)
		{
			count++;
		}
		return;
	}

	for (int i = 0; i < 2; i++)
	{
		crrarea += select[i];
		DFS(area, count, crrarea,select);
		crrarea -= select[i];
	}
}

int main()
{
	int T;
	cin >> T;
	vector<int> arr;//������������
	int tmp;
	for (int i = 0;i<T; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}
	vector<int> resarr;
	for (int i = 0; i < arr.size(); i++)
	{
		DFS(2*arr[i], 0, 0, select);
		resarr.push_back(res);
	}
	for (int i = 0; i < resarr.size(); i++)
	{
		cout << resarr[i] << endl;
	}
	system("pause");
	return 0;
}

