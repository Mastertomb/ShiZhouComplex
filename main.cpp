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
	//Complex c = a + b;//C++ default ���� = ���Բ�������
	Complex c = a + b;//������default���캯���ĵ���
	//c = a + b;
	Complex d(c);//����ÿ�������
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