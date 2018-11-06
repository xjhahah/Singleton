#include<iostream>
using namespace std;

//饿汉模式
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
	//将构造函数私有化
	Singleton() 
	{}

	//C++11   删除函数，防拷贝
	Singleton(const Singleton& s)=delete;
	Singleton& operator=(const Singleton s)=delete;
	static Singleton _sInstance;
};

//在程序入口之前完成单例对象的初始化
Singleton Singleton::_sInstance;
int main()
{
	//Singleton copy(*Singleton::GetInstance());
	Singleton* obj(Singleton::GetInstance());
	return 0;
}