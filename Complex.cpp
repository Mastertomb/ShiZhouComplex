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

Complex::Complex(const Complex& x)//OS default����������heap��new�����Ķ�����ʹ��ʱ�����ǳ���������⣬��������Լ�д����
{
	_real = x._real;
	_image = x._image;
	//cout << "Complex::Complex(const Complex& x)" << endl;
}

Complex::~Complex()
{
	//cout << "Complex::~Complex()" << endl;
}

double Complex::GetReal() const//const----��Ա����ֵ������ı�
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

Complex Complex::operator+(const Complex& x)//return tmp����ÿ������캯��Complex::Complex(const Complex& x)
{
	//Complex tmp;//stack�е��м����
	//tmp._real = _real + x._real;
	//tmp._image = _image + x._image;
	//return tmp;
	//�Ż���ʱ����
	return Complex(_real + x._real, _real + x._image);
}
//Complex Complex::operator=(const Complex& x)
//{
//	_real = x._real;
//	_image = x._image;
//	//thisָ��ǰ������----*this���ص�ǰ����
//	return *this;
//}

//�Ż��汾
Complex& Complex::operator=(const Complex& x)
{
	if (this != &x)
	{
		_real = x._real;
		_image = x._image;
	}
	return *this;
}


Complex& Complex::operator++()//ǰ��
{
	_real++;
	_image++;
	return *this;
}

Complex Complex::operator++(int)//����
{
	//Complex tmp(*this);//��ǰ����Ŀ�������----��һ�ο�������
	//_real++;
	//_image++;
	//return  tmp;//�ڶ��ο�������
	//�Ż�
	return Complex(_real++, _image++);
}


Complex& Complex::operator--()//ǰ��
{
	_real--;
	_image--;
	return *this;
}


Complex Complex::operator--(int)//����
{
	return Complex(_real--, _image--);
}

ostream& operator<<(ostream& os, const Complex& x)//������Complex�ĳ�Ա����û��Complex::���������Ʒ�,��ʵ��ȫ��
{
	os << "real value is " << x._real << " image value is " << x._image;
	return os;
}
istream& operator>>(istream& is, Complex& x)
{
	is >> x._real >> x._image;
	return is;
}