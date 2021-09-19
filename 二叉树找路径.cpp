#include <iostream>
#include<vector>
#include<queue>

//�����⣺��һ����������ÿ���ڵ�ֵ����Ψһ��ͬ���ַ���д����ʵ�ִ���һ���ַ�ֵx, ���ض�Ӧ�Ľڵ㣬�Ҳ�������null��
//���ף���ӡ����ͷ�ڵ㵽Ŀ��ڵ�x��·��
using namespace std;
struct TreeNode {
	char c;
	TreeNode* left;
	TreeNode* right;
	TreeNode(char ch) :c(ch), left(NULL), right(NULL) {}
};

void DFS(TreeNode* root, char ch, vector<char>& crr);
TreeNode* find(TreeNode* root, char ch);
vector<char> findpath(TreeNode* root, char ch);

TreeNode* find(TreeNode* root, char ch)
{//�������Ƿ���ڸýڵ㣬�����ڷ���NULL�����ڷ��ظýڵ�
	TreeNode* node1;
	TreeNode* node2;
	if (root == NULL) return NULL;
	if (root)
	{
		if (root->c == ch)
		{
			return root;
		}
		node1 = find(root->left, ch);
		if (node1) return node1;
		node2 = find(root->right, ch);
		if (node2) return node2;
	}
	return NULL;
}

void DFS(TreeNode* root, char ch, vector<char>& crr)
{//
	crr.push_back(root->c);//��ǰ��ѹ��
	if (root->c == ch)
	{//�ߵ�Ŀ��ڵ��ˣ����ؼ���
		return ;
	}
	TreeNode* left = find(root->left, ch);//�ж���������������������
	if (left) DFS(root->left, ch, crr);
	else DFS(root->right, ch, crr);
}

vector<char> findpath(TreeNode* root, char ch)
{
	vector<char> crr;
	TreeNode* node = find(root, ch);
	if (node == NULL)  return crr;
	DFS(root, ch, crr);
	return crr;
}



TreeNode* ctreateTree(vector<char>& arr)
{//����arr����һ�Ŷ�����
	int len = arr.size();
	if (len < 1) return NULL;
	TreeNode* root = new TreeNode(arr[0]);
	TreeNode* crr = root;
	queue<TreeNode*> q;
	q.push(crr);
	int k = 1;
	while (!q.empty() && k<len)
	{
		int length = q.size();
		for (int i = 0; i < length; i++)
		{
			TreeNode* tmp = q.front();
			q.pop();
			tmp->left = new TreeNode(arr[k++]);
			q.push(tmp->left);
			if (k >= len) break;
			tmp->right = new TreeNode(arr[k++]);
			q.push(tmp->right);
			if (k >= len) break;
		}
	}
	return root;
}

void travel(TreeNode* root)
{
	if (root)
	{
		cout << root->c << " ";
		travel(root->left);
		travel(root->right);
	}
}

int main()
{
	vector<char> arr = { 'a','b','c','d','e','f','g','h' };
	TreeNode* root = ctreateTree(arr);
	//TreeNode* node = find(root, 'l');
	vector<char> res = findpath(root, 'h');
	cout << res.size()<< endl;
	
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}