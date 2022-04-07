#include<iostream>
using namespace std;

class Base
{
	int data1;
	public:
		int data2;
		 void setData();
		 int getData1();
		 int getData2();

};

void Base :: setData()
{
	data1 = 10;
	data2 = 20;
}

int Base :: getData1()
{
	return data1;
}


int Base  :: getData2()
{
	return data2;
}

class Derived : public Base
{
	int data3;
	public:
		void process();
		void display();
};

void Derived :: process()
{
	data3 = data2 * getData1();
}

void Derived :: display()
{
	cout<<"Value of data1 is "<<getData1()<<endl;
	cout<<"Value of data2 is "<<data2<<endl;
	cout<<"Value of data3 is "<<data3<<endl;
}


int main()
{
	Derived d1;
	d1.setData();
	d1.process(); //using Derived object but data is set by base object so garbag data will come
	d1.display();

	return 0;
}
