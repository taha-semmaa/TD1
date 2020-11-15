#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
	this->m_re = 2.45;
	this->m_im = 1.5;
	this->tab = new int[3];
	this->tab[0] = 1;
	this->tab[1] = 2;
	this->tab[2] = 3;
}

Complex::Complex(const Complex& z)
{
	this->m_re = z.m_re;
	this->m_im = z.m_im;
	this->tab = new int[3];
	this->tab[0] = z.tab[0];
	this->tab[1] = z.tab[1];
	this->tab[2] = z.tab[2];

}

Complex::Complex(double x, double y)
{
	this->m_re = x;
	this->m_im = y;
	this->tab = new int[3];
	this->tab[0] = 1;
	this->tab[1] = 2;
	this->tab[2] = 3;
}

void Complex::m_print()
{
	if (this->m_im >= 0)
		cout << this->m_re << "+i" << this->m_im << endl;
	else
		cout << this->m_re << "-i" << -this->m_im << endl;
	cout << "le tableau :" << this->tab[0] << "\t";
	cout << this->tab[1] << "\t";
	cout << this->tab[2] << endl;

}

Complex Complex::m_conjugue()
{
	Complex ZB;
	ZB.m_re = this->m_re;
	ZB.m_im = -this->m_im;
	ZB.tab = new int[3];
	ZB.tab[0] = 1;
	ZB.tab[1] = 2;
	ZB.tab[2] = 3;
	return ZB;
}
