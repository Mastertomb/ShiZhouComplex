#pragma once
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double r,double i);   //���캯��
	virtual ~Complex();   //��������
	Complex(const Complex& x);//��������

	double GetReal() const;//const----��Ա����ֵ������ı�
	void SetReal(double r);
	double GetImage() const;
	void SetImage(double i);
	//���������
	//����ֵ     �����    const����Complex&
	Complex operator+(const Complex& x) const;
	//Complex operator=(const Complex& x);
	Complex& operator=(const Complex& x);//���ָ�Ϊ����,���ô��ݷ�ֹ������������
	Complex& operator+=(const Complex& x);
	bool operator==(const Complex& x)const;
	bool operator!=(const Complex& x)const;

	//ǰ�úͺ��ò�����++,--
	Complex& operator++();//ǰ��
	Complex operator++(int);//����
	Complex& operator--();
	Complex operator--(int);

	friend ostream& operator<<(ostream& os, const Complex& x);
	friend  istream& operator>>(istream& is, Complex& x);

private:                          //�����ŷ�Χ֮���޷�ʹ��
	double _real;             //ʵ��
	double _image;         //�鲿
protected:
};

