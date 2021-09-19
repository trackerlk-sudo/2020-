#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//����һ�����飬�������е�����������Ź������ֵ������Сֵ
//class Solution {
//public:
//	 int  minNumber(vector<int>& nums){
//		vector<string> arr;
//		for (auto num : nums)
//		{
//			arr.push_back(to_string(num));
//		}
//		sort(arr.begin(), arr.end(),compare);
//		string res;
//		for (auto str : arr)
//		{
//			res += str;
//		}
//		return atoi(res.c_str());
//	}
//
//	static bool compare(const string& str1, const string& str2)
//	{
//		return str1 + str2 < str2 + str1;
//	}
//};
bool compare(const string& str1, const string& str2)
{//�Զ����������
	return str1 + str2 > str2 + str1;
}
int minNumber(vector<int>& nums) {
	vector<string> arr;
	for (auto num : nums)
	{
		arr.push_back(to_string(num));
	}
	sort(arr.begin(), arr.end(), compare);//���չ�������
	string res;
	for (auto str : arr)
	{
		res += str;
	}
	return atoi(res.c_str());//string��תchar* ���ٴ���atoi�������ַ���ת����
}


int main()
{
	vector<int> arr = { 10,2,51,3 };
	cout<<minNumber(arr)<<endl;
	system("pause");
}