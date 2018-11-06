#include<iostream>
using namespace std;

//����ģʽ
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		return &_sInstance;
	}
	//Singleton& GetInstance()
	//{
	//	return _sInstance;
	//}
private:
	//�����캯��˽�л�
	Singleton() 
	{}

	//C++11   ɾ��������������
	Singleton(const Singleton& s)=delete;
	Singleton& operator=(const Singleton s)=delete;
	static Singleton _sInstance;
};

//�ڳ������֮ǰ��ɵ�������ĳ�ʼ��
Singleton Singleton::_sInstance;
int main()
{
	//Singleton copy(*Singleton::GetInstance());
	Singleton* obj(Singleton::GetInstance());
	return 0;
}