#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;


//ȡ���������ʱ�ģ���Ʊ����������ʱ��

int getnum(vector<int>& arr)
{//���������
	int len = arr.size();
	if (len < 1) return 0;
	int maxres = 0;
	int min = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i] >min)
		{
			maxres = max(maxres, arr[i] - min);
		}
		else
		{
			min = arr[i];

		}
	}
	return maxres;
}

//�����������ʱ�ľ������������±�
void  getindex(vector<int>& arr)
{//���������
	int len = arr.size();
	vector<int> res;
	if (len < 1) return;
	int maxres = 0;//�������
	int min = arr[0];//֮ǰ����͹ɼ�
	int minday = 0;//֮ǰ��С�ɼ۵��±�
	pair<int, int> buy_in_out_day(0, 0);
	for (int i = 1; i < len; i++)
	{
		if (arr[i] >min)
		{
			if (arr[i] - min > maxres)
			{
				maxres = arr[i] - min;
				buy_in_out_day.first = minday;
				buy_in_out_day.second = i;	//�����±�ͬʱ�޸�
			}
		}
		else
		{
			min = arr[i];
			minday = i;//������С�±�
		}
	}
	cout << buy_in_out_day.first << " " << buy_in_out_day.second << endl;	
}

void get_day(vector<int>& price) {
	int min_price(1e9);
	int min_price_day(0);
	//![�������]
	int max_profit(0);
	std::pair<int, int> buy_in_out_day(0, 0);

	for (int i(0); i < price.size(); ++i) {
		if (min_price > price[i]) {
			min_price = price[i];
			min_price_day = i;
		}
		if (max_profit < price[i] - min_price) {
			max_profit = price[i] - min_price;
			buy_in_out_day.first = min_price_day + 1;
			buy_in_out_day.second = i + 1;
		}
	}
	cout << max_profit << ": " << buy_in_out_day.first << " " << buy_in_out_day.second << endl;
}


void getrealday(vector<int>& arr)
{
	int len = arr.size();
	if (len == 0) return ;
	int minday = 0;//����֮ǰ��С�ɼ۵��±�
	int min = arr[0];//����֮ǰ��͹ɼ�
	int res = 0;
	int start = 0;
	int end = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[i] >= min)
		{
			if (arr[i] - min > res)
			{
				res = arr[i] - min;
				start = minday;
				end = i;
			}
		}
		else
		{
			min = arr[i];
			minday = i;
		}
	}
	cout << res<<" "<<start << " " << end << endl;
}

int main()
{
	vector<int> arr = {7,8,11,5,4,9,17,1,15,6 };
	//int res = getnum(arr);
	//cout << res << endl;
	//get_day(arr);
	getrealday(arr);
	system("pause");
	return 0;
}


