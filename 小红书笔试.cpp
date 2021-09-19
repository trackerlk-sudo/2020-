#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include<map>
#include<algorithm>

using namespace std;


/*������������������ʵ����ĿҪ��Ĺ���
��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
******************************��ʼд����******************************/
//���������������
int maxBoxes(vector < vector < int > > boxes) {
	int high = boxes.size();//��
	int len= boxes[0].size();//��
	map<int, int> mymap;
	for (int i = 0; i < high; i++)
	{
		mymap[boxes[i][0]] = boxes[i][1];
	}
	int count = 1;
	auto pre = mymap.begin();
	auto prev = mymap.begin();
	auto it =++prev;
	for (; it != mymap.end(); it++)
	{
		if (it->second > pre->second)
		{
			count++;
		}
		pre = it;
	}

	return count;
}
/******************************����д����******************************/


int main() {
	int res;

	int _boxes_rows = 0;
	int _boxes_cols = 0;
	cin >> _boxes_rows >> _boxes_cols;
	vector< vector < int > > _boxes(_boxes_rows);
	for (int _boxes_i = 0; _boxes_i<_boxes_rows; _boxes_i++) {
		for (int _boxes_j = 0; _boxes_j<_boxes_cols; _boxes_j++) {
			int _boxes_tmp;
			cin >> _boxes_tmp;
			_boxes[_boxes_i].push_back(_boxes_tmp);
		}
	}

	res = maxBoxes(_boxes);
	cout << res << endl;
	system("pause");
	return 0;

}
