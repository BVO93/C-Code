//
// Created by bjorn on 15.03.20.
//

#include<iostream>
#include<memory>

using namespace std;

class Test{
public:
    Test() {
        cout << "Created" << endl;
    }

    void greet(){
        cout << "Hello" << endl;
    }

    ~Test(){
        cout << "destroyed" << endl;
    }

};

int main(){

    unique_ptr<Test> pTest(new Test);

    pTest->greet();


    cout << "Finished" << endl;

    return 0;
}
