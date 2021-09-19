#include<iostream>
#include<mutex>

using namespace std;

//����ģʽ ����ģʽ
class Single {
private:
	Single(){}
	static Single* instance;//��̬��Աָ��
	static mutex mut;

public:
	static Single* getinstance();
};

Single* Single::instance = NULL;
mutex Single::mut;


Single* Single::getinstance() 
{
	if (instance == NULL)
	{
		mut.lock();
		if (instance == NULL)
		{
			instance = new Single();
		}
		mut.unlock();
	}
	return instance;
}

//����ģʽ ����ģʽ
//class SingleObj {
//private:
//	SingleObj(){}
//
//public:
//	static SingleObj* instance;
//	static SingleObj* getinstance()
//	{
//		return instance;
//	}
//
//};
//SingleObj* SingleObj::instance = new SingleObj();//��ĳ�Ա�����Ķ��壬���Ե���˽�к���



int main()
{
	Single* instance1=Single::getinstance();
	Single* instance2 = Single::getinstance();
	Single* instance3 = Single::getinstance();

	cout << instance1 << endl;
	cout << instance2 << endl;
	cout << instance3 << endl;
	system("pause");
	return 0;
}