#include "Complex.h"

Complex::Complex()
{
	_real = 0;
	_image = 0;
	//cout << "Complex::Complex()" << endl;
}

Complex::Complex(double r,double i)
{
	_real = r;
	_image = i;
	//cout << "Complex::Complex(double,double)" << endl;
}

Complex::Complex(const Complex& x)//OS default拷贝构造在heap上new出来的对象上使用时有深拷贝浅拷贝的问题，所以最好自己写出来
{
	_real = x._real;
	_image = x._image;
	//cout << "Complex::Complex(const Complex& x)" << endl;
}

Complex::~Complex()
{
	//cout << "Complex::~Complex()" << endl;
}

double Complex::GetReal() const//const----成员变量值不允许改变
{
	return _real;
}
void Complex::SetReal(double r)
{
	_real = r;
}
double Complex::GetImage() const
{
	return _image;
}
void Complex::SetImage(double i)
{
	_image = i;
}

Complex Complex::operator+(const Complex& x)//return tmp会调用拷贝构造函数Complex::Complex(const Complex& x)
{
	//Complex tmp;//stack中的中间变量
	//tmp._real = _real + x._real;
	//tmp._image = _image + x._image;
	//return tmp;
	//优化临时对象
	return Complex(_real + x._real, _real + x._image);
}
//Complex Complex::operator=(const Complex& x)
//{
//	_real = x._real;
//	_image = x._image;
//	//this指向当前对象本身----*this返回当前对象
//	return *this;
//}

//优化版本
Complex& Complex::operator=(const Complex& x)
{
	if (this != &x)
	{
		_real = x._real;
		_image = x._image;
	}
	return *this;
}


Complex& Complex::operator++()//前置
{
	_real++;
	_image++;
	return *this;
}

Complex Complex::operator++(int)//后置
{
	//Complex tmp(*this);//当前对象的拷贝构造----第一次拷贝构造
	//_real++;
	//_image++;
	//return  tmp;//第二次拷贝构造
	//优化
	return Complex(_real++, _image++);
}


Complex& Complex::operator--()//前置
{
	_real--;
	_image--;
	return *this;
}


Complex Complex::operator--(int)//后置
{
	return Complex(_real--, _image--);
}

ostream& operator<<(ostream& os, const Complex& x)//并不是Complex的成员所以没有Complex::作用域限制符,其实是全局
{
	os << "real value is " << x._real << " image value is " << x._image;
	return os;
}
istream& operator>>(istream& is, Complex& x)
{
	is >> x._real >> x._image;
	return is;
}