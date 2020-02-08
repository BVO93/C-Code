#include<iostream>
using namespace std;

template<class T>
void print(T n){
	cout << n << endl;
}

//template class 
template<class T>
class Test{
	private:
	T obj;
	
	public:
	Test(T obj){
		this -> obj = obj;
	}
	
	void print(){
		cout << obj << endl;
	}
};

template <class myType>
myType getMax(myType a, myType b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int main(){
	
	Test<string> test1("Hello");
	test1.print();
	
	int a = 2;
	int b = 5;
	
	int val = getMax(a, b);
	cout << val << endl;
	
	print<string>("Hello");
	print<int>(5);
	
	return 0;
}