#pragma once
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double r,double i);   //构造函数
	virtual ~Complex();   //析构函数
	Complex(const Complex& x);//拷贝构造

	double GetReal() const;//const----成员变量值不允许改变
	void SetReal(double r);
	double GetImage() const;
	void SetImage(double i);
	//运算符重载
	//返回值     运算符    const修饰Complex&
	Complex operator+(const Complex& x);
	//Complex operator=(const Complex& x);
	Complex& operator=(const Complex& x);//这种更为常用,引用传递防止产生拷贝构造

	//前置和后置操作符++,--
	Complex& operator++();//前置
	Complex operator++(int);//后置
	Complex& operator--();
	Complex operator--(int);

	friend ostream& operator<<(ostream& os, const Complex& x);
	friend  istream& operator>>(istream& is, Complex& x);

private:                          //大括号范围之外无法使用
	double _real;             //实部
	double _image;         //虚部
protected:
};

