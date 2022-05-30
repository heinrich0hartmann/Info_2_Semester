#pragma once

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Complex
{
public:
	Complex(double re, double im) : m_re(re), m_im(im) {}

	// Setter und Getter
	void setRe(double re) { m_re = re; }
	double getRe()const { return m_re; }
	void setIm(double im) { m_im = im; }
	double getIm() const { return m_im; }

private:
	double m_re;
	double m_im;
};

// ueberladene Operatoren mit globalen Funktionen
// **********************************************

Complex operator+(const Complex& z1, const Complex& z2)
{
	Complex z3(z1.getRe() + z2.getRe(), z1.getIm() + z2.getIm());
	return z3;
}

Complex operator-(const Complex& z1, const Complex& z2)
{
	Complex z3(z1.getRe() - z2.getRe(), z1.getIm() - z2.getIm());
	return z3;
}

Complex operator/(const Complex& z1, const Complex& z2)
{
	if (z2.getRe() == 0 && z2.getIm() == 0)
	{
		throw invalid_argument("Division durch 0.");
	}
	double a = z1.getRe();
	double b = z1.getIm();
	double c = z2.getRe();
	double d = z2.getIm();

	double nenner = (pow(c, 2) + pow(d, 2));
	double re = ((a * c) + (b * d)) / nenner;
	double im = ((b * c) - (a * d)) / nenner;

	Complex z3(re, im);
	return z3;

}

istream& operator>>(istream& is, Complex& z)
{
	cout << endl << "Realteil: ";
	double re;
	cin >> re;
	cout << "Imaginaerteil: ";
	double im;
	cin >> im;
	z.setRe(re);
	z.setIm(im);
	return is;
}

ostream& operator<<(ostream& os, Complex& z)
{
	if (z.getIm() < 0)
	{
		os << z.getRe() << z.getIm() << 'i';
	}
	else
	{
		os << z.getRe() << '+' << z.getIm() << 'i';
	}
	os << endl;
	return os;
}
