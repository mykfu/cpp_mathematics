#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
	double re;
	double im;

public:
	Complex(double re = 0, double im = 0);

	double getReal();
	double getImage();

	void setReal(double re);
	void setImage(double im);

	string toString();

	const Complex operator+(const Complex & rhs) const; // this + rhs
	const Complex operator+(const double rhs) const;
	const friend Complex& operator+(double lhs, Complex& rhs); // out << c

	friend ostream& operator<<(ostream& out, Complex& c); // out << c
	friend istream& operator>>(istream& in, Complex& c);
	
	bool operator==(const Complex& rhs)const;

	const Complex& operator++();

	// реализовать: 
	// вывод во всех формах.
	// +, -, *, /
	// abs(), arg() - модуль и аргумент
	// ==, >, <, !=

	// sqrt() - методы вычисления квадратного корня.
};

