#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	long long int n, m;
	cin >> n >> m;
	vector<long long int> arr(m, 0);
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}//��������
	long long int tmp = -1;
	double k = 0;
	for (int i = 0; i < m; i++)
	{

		n += arr[i];//�����ˮ
		n -= ceil(n*1.0/2.0);//�����ˮ
	}
	cout << n << endl;
	//system("pause");
	return 0;
}