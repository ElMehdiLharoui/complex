#pragma once
#include<iostream>
using namespace std;
namespace Complex{
	class complex {

	public :

		complex(double, double);
		complex& create_complex(double,double);
		void affichage()const;
		void module()const;
		complex& conjigue() const;
		complex& operator+(const complex&) const;
		complex& operator-(const complex&) const;
		complex& operator+( double ) const;
		complex& operator-( double) const;

	private:
		double re, img;


	};




}
