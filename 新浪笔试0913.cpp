#include<iostream>
#include<vector>
#include<string>


using namespace std;

//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(){}
// };
//
//
//class Solution {
//public:
//	/**
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	* ���뵥�����ͷ�ڵ��Ҫɾ���ĵ�����N��������ɾ�����ͷ�ڵ�
//	* @param head ListNode�� �������ͷ�ڵ�
//	* @param n int����
//	* @return ListNode��
//	*/
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		// write code here
//		if (head == NULL) return head;
//		ListNode* tmp = head;
//		ListNode* crr = head;
//		int count = 0;
//		while (tmp)
//		{
//			tmp = tmp->next;
//			count++;
//		}
//		if (count == n) return head->next;
//		int k = count - n - 1;
//		while (k-- && crr)
//		{
//			crr = crr->next;
//		}
//		crr->next = crr->next->next;
//		return head;
//	}
//};
//
//class Solution {
//public:
//	/**
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	*
//	* @param nums int����vector
//	* @return int����
//	*/
//	int firstMissingPositive(vector<int>& nums) {
//		// write code here
//		int flag;
//		int res = 1;
//		for (int i = 1; i < nums.size(); i++)
//		{
//			flag = 0;
//			for (int j = 0; j < nums.size(); j++)
//			{
//				if (nums[j] == i)
//				{
//					flag = 1;
//					res++;
//					break;
//				}
//			}
//			if (flag == 0)
//				return res;
//		}
//		return res;
//	}
//};


char * mystrcpy(char * src, const char * tar)
{
	if (src == NULL || tar == NULL)
	{
		return NULL;
	}
	char * newstr = src;
	while ((*src++ = *tar++) != '\0');
	*src = '\0';
	return newstr;
}
int main()
{
	string sources;
	string target;
	cin >> sources >> target;
	int lens = sources.size();
	int lent = target.size();
	char *s = NULL;
	char *t = NULL;
	s = (char*)malloc(lens+1);
	t = (char*)malloc(lent+1);

	mystrcpy(s,sources.c_str());
	mystrcpy(t, target.c_str());
	mystrcpy(s, t);

	cout << s << endl;
	system("pause");
	return 0;
}