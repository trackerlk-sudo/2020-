#include<iostream>

using namespace std;

bool ispre(int m)
{//�ж�m�Ƿ�������
	for (int i = 2; i*i <= m; i++)
	{
		if (m%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int m;
	cin >> m;
	for (int i = 2; i <= m; i++)
	{
		if (ispre(i))
		{//�ж�i�Ƿ�������
			cout << i << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}