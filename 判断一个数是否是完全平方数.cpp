#include<iostream>
#include<algorithm>
using namespace std;

bool issqrt(int n)
{
	double m = sqrt(n);//intֱ������ȡ��
	if (m == int(m))
	{
		return true;
	}
	return false;
}

int main()
{
	int a;
	cin >> a;
	cout << int (3.897) << endl;
	if (issqrt(a))
	{
		cout << a << "����ȫƽ����!" << endl;
	}
	else
	{
		cout << a << "������ȫƽ����!" << endl;
	}
	system("pause");
	return 0;
}