 #ifndef COMPLEX_H_
 #define COMPLEX_H_
 
 #include<iostream>
 using namespace std;
 
 namespace cop{
	 
	 class Complex{
		 
		 private:
			double real;
			double imaginary;
			
		 public:
			Complex();
			Complex(double real, double imaginary);
			Complex(const Complex &other);
			const Complex &operator=(const Complex &other);
	 
	 double getReal() const{		return real;
	 }
	 
	 double getImaginary() const {
		 return imaginary;
	 }
	 
	 
	 };
	 
	 
// free standing  functions

ostream &operator<<(ostream &out, const Complex &c);

Complex operator+(const Complex &c1, const Complex &c2);

// other + operator to add a double
Complex operator+(const Complex &c1, double d);

bool operator==(const Complex &other)const;
 
Complex operator *() const;

 }
 
 #endif // COMPLEX.H //