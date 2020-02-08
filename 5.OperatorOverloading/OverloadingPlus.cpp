#include <iostream>
#include"Complex.h"

using namespace std;
using namespace cop;

int main(){
	
	Complex c1(1, 2);
	Complex c2(5, 7);
	
	cout  << c1 << endl;
	
	cout << c1 + c2 << endl;
	
	Complex c5 = c2 + 5;
	
	cout << c5 << endl;
	
	return 0;
}