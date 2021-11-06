#include"complex.h";
#include <iostream>
#include <math.h>
using namespace Complex;

Complex::complex::complex(double re, double img)
{
	this->re = re;
	this->img = img;
}

complex& complex::create_complex(double r,double i)
{
	complex* p = new complex(r, i);
	return *p;


}

void Complex::complex::affichage() const
{
	if (this->img > 0)cout << this->re << "+" << this->img << "i";
	else if (this->img < 0) std::cout << this->re << " " << this->img << "i";
	else cout << this->re << "i";
}

void Complex::complex::module() const
{
	//return sqrt(pow(this->re, 2), pow(this->img, 2));
}

complex& Complex::complex::conjigue() const
{
	complex* p = new complex(this->re, this->img);
	return *p;
}

complex& Complex::complex::operator+(const complex&c) const
{
	complex* p = new complex(this->re+c.re, this->img+c.img);
	return *p;
}

complex& Complex::complex::operator-(const complex&c) const
{
	complex* p = new complex(this->re - c.re, this->img - c.img);
	return *p;
}

complex& Complex::complex::operator+(double a) const
{
	complex* p = new complex(this->re + a, this->img);
	return *p;
}

complex& Complex::complex::operator-(double b) const
{
	complex* p = new complex(this->re - b , this->img);
	return *p;
}
