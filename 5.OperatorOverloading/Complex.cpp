#include "Complex.h"

namespace cop{
	
	Complex operator+(const Complex &c1, const Complex &c2){
		return Complex(c1.getReal()+c2.getReal(), c1.getImaginary() + c2.getImaginary());
	}
	 
Complex operator+(const Complex &c1, double d){
		return Complex(c1.getReal()+d, c1.getImaginary());
}
	
	
	bool Complex::operator==(const Complex &other)const{
		return (real == other.real) && (imaginary == other.imaginary);
	}
 
	
	ostream &operator<<(ostream &out, const Complex &c){
		out << "(" << c.getReal() << "," << c.getImaginary() << ")";
		return out;
	} 
	
	
	Complex:: Complex(): real(0), imaginary(0){
		// do nothing
	}
	
	Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){	
	}

	// Operator = overloading 
	const Complex &Complex::operator=(const Complex &other){
		real = other.real;
		imaginary = other.imaginary;
		
		cout << "Operator overloader running " << endl;
		
		return *this;
	}
			
			
	// Copy constructor 		
	Complex::Complex(const Complex &other){
		real = other.real;
		imaginary = other.imaginary;
	}	
	
	
	
	Complex Complex::operator *() const{
		return Complex(real, -imaginary);
	}



	
}