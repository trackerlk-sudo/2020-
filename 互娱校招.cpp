#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	//char tmp_str[];
	vector<string> arr;//�����������
	for (int i = 0; i < T; i++)
	{
		char tmp_str[21];
		cin.getline(tmp_str,20);
		arr.push_back(tmp_str);
	}
	for (int i = 0; i < T; i++)
	{
		vector<int> arrW(9, 0);//���W���±�0-8��Ӧ1-9
		vector<int> arrB(9, 0);//���B������
		vector<int> arrT(9, 0);//���T������
		int countW = 0;//��ʾ�ܴճ������ĸ�����147 258 369
		int countB = 0;
		int countT = 0;
		int sum_count = 0;
		for (int j = 0; j <= arr[i].size() - 2; j += 3)
		{
			if (arr[i][j + 1] == 'W')
			{
				arrW[arr[i][j] - '0' - 1] = arr[i][j] - '0';

			}
			else if (arr[i][j + 1] == 'B')
			{
				arrB[arr[i][j] - '0' - 1] = arr[i][j] - '0';
			}
			else if (arr[i][j + 1] == 'T')
			{
				arrT[arr[i][j] - '0' - 1] = arr[i][j] - '0';
			}
		}//ͳ�����
		for (int m = 0; m <= 7; m++)
		{
			cout << arrB[m] << endl;
		}


		 //������������ǣ�countΪ1����2
		if ((arrW[0] && arrW[3] && arrW[6]) || (arrW[1] && arrW[4] && arrW[7]) || (arrW[2] && arrW[5] && arrW[8]))
		{//147 258 369
			countW++;
			sum_count++;
		}
		if ((arrB[0] && arrB[3] && arrB[6]) || (arrB[1] && arrB[4] && arrB[7]) || (arrB[2] && arrB[5] && arrB[8]))
		{//147 258 369
			countB++;
			sum_count++;
		}
		if ((arrT[0] && arrT[3] && arrT[6]) || (arrT[1] && arrT[4] && arrT[7]) || (arrT[2] && arrT[5] && arrT[8]))
		{//147 258 369
			countT++;
			sum_count++;
		}
		if (sum_count == 0)
		{//һ����û����
			cout << "NO" << endl;
		}
		else if (sum_count == 2)
		{
			if (countW == 0)
			{//B T������
				int k;
				for (k = 0; k < arrW.size(); k++)
				{//��һ����Ϊ0����
					if (arrW[k] != 0)
					{
						cout <<"YES" << endl;
					}
				}
				if (k == 9)
				{
					cout << "NO" << endl;
				}

			}
			else if (countB == 0)
			{
				int m;
				for (m = 0; m < arrB.size(); m++)
				{//��һ����Ϊ0����
					if (arrB[m] != 0)
					{
						cout << "YES" << endl;
					}
				}
				if (m == 9)
				{
					cout << "NO" << endl;
				}
			}
			else if (countT == 0)
			{
				int n;
				for (n = 0; n < arrT.size();n++)
				{//��һ����Ϊ0����
					if (arrT[n] != 0)
					{
						cout << "YES" << endl;
					}
				}
				if (n == 9)
				{
					cout << "NO" << endl;
				}
			}
		}
		else if (sum_count == 1)
		{
			if (countW == 1)
			{//B T������
				//int resB = 0;
				//sort(arrB.rbegin(), arrB.rend());
				//sort(arrT.rbegin(), arrT.rend());//�Ӵ�С����
				//if (arrB[0] == 9 && find(arrB.begin(),arrB.end(),6)!=arrB.end() || arrB[0] == 9 && find(arrB.begin(), arrB.end(), 3) != arrB.end())
				//{//B�д�����������Ҫ��
				//	resB++;
				//}
				cout << "NO" << endl;
			}
			else if (countB == 1)
			{//W T������
				cout << "NO" << endl;
			}
			else if (countT == 1)
			{//W B������
				cout << "NO" << endl;
			}
		}
	}
	//system("pause");
	return 0;
}