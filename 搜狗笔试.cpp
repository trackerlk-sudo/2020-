#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	* �����ܽ�����Ʒ���������
	* @param a int����
	* @param b int����
	* @param c int����
	* @return int����
	*/
	int numberofprize(int a, int b, int c) {
		// write code here
		vector<int> arr;
		arr.push_back(a);
		arr.push_back(b);
		arr.push_back(c);

		sort(arr.begin(), arr.end());
		long long int res = 0;
		res += arr[0];
		long long int tmp = arr[0];
		for (int i = 0; i < 3; i++)
		{
			arr[i] = arr[i] - tmp;
		}
		if (arr[1] + arr[2] < 4) return res;

		while (arr[1] > 0)
		{
			arr[1] -= 2;
			arr[2] -= 2;
			res++;
		}
		if (arr[1] == -1)
		{//���һ�β��ܼ���
			arr[1] += 2;
			arr[2] += 2;
			res--;

			if (arr[2] >= 3)
			{
				res++;
				arr[2] -= 3;
			}
			res += (arr[2] / 5);
			return res;
		}
		else if (arr[1] == 0)
		{
			res += (arr[2] / 5);
			return res;
		}
	}
};

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	Solution p;
	cout << p.numberofprize(a, b, c) << endl;
	system("pause");
	return 0;
}

//class Solution {
//public:
//	/**
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	* �����ܴ����ķ�����
//	* @param t int���� Ҫ���ķ������
//	* @param xa int����һά���� ���з��ݵ�ֵ������ x0 a0 x1 a1 x2 a2 ... xi ai �������з��ݵ�����ͷ������ ��������������ģ���С����
//	* @param xaLen int xa���鳤��
//	* @return int����
//	*/
//	int getHouses(int t, int* xa, int xaLen) {
//		// write code here
//		int res = 0;
//		for (int i = 0; i <= xaLen - 4; i += 2)
//		{
//			double pre = xa[i] + xa[i + 1] / 2.0;//��ǰ���
//			if (xa[i + 2] > pre + t)
//			{
//				res += 2;
//			}
//			else if (xa[i + 2] == pre + t)
//			{
//				res += 1;
//			}
//		}
//		res += 2;
//		return res;
//	}
//};
//
//int main()
//{
//	Solution p;
//	int a[4] = { -1,4,5,2 };
//	cout << p.getHouses(2, a, 4) << endl;
//	system("pause");
//	return 0;
//}