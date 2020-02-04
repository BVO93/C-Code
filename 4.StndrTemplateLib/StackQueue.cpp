#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Test{
	private:
		string name;
		
	public:
		Test(string name):
			name(name){
				
			}

	void print(){
		cout << name << endl;
	}

};

int main(){
	//LIFO
	stack<Test> testStack;
	
	
	testStack.push(Test("Mike"));
	testStack.push(Test("Sue"));	
	testStack.push(Test("John"));

	Test test1 = testStack.top();
	test1.print();
	
	//testStack.pop();
	//test1 = testStack.top();
	//test1.print();
	
	while(testStack.size() > 0){
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}
	
	cout <<endl;
	
	queue<Test>testQueue;
	
	testQueue.push(Test("Mike"));
	testQueue.push(Test("Sue"));	
	testQueue.push(Test("John"));
	
	
	while(testQueue.size() > 0){
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}
	
	return 0;
}

