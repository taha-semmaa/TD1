#pragma once
class Complex
{
	// les attributs
private:
	double m_re;
	double m_im;
	int* tab;
	//les méthode
public:
	Complex();//constructeur sans parametre
	Complex(const Complex& z); //constructeur de recopie
	Complex(double, double);//constructeur avec parametres
	void m_print();
	Complex m_conjugue();

};
