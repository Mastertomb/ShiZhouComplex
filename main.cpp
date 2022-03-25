#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
	Complex a(1.1, 2.2);
	//cout << "real = " << a.GetReal() << endl;
	//cout << "image = " << a.GetImage() << endl;
	//a.SetReal(3.3);
	//a.SetImage(4.4);
	//cout << "real = " << a.GetReal() << endl;
	//cout << "image = " << a.GetImage() << endl;
	Complex b(2.0, 3.0);
	//cout << (a + b).GetReal() << endl;
	//cout << (a + b).GetImage() << endl;
	//Complex c = a + b;//C++ default 重载 = 所以并不报错
	Complex c = a + b;//避免了default构造函数的调用
	//c = a + b;
	Complex d(c);//会调用拷贝构造
	//c = a + b;//operator= Overload
	Complex e;
	e = d++;
	cout << e << endl;
	cout << d << endl;
	e = ++d;
	cout << e << endl;
	cout << d << endl;
	cin >> e;
	cout << e << endl;
	return 0;
}