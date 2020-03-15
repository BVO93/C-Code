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

    shared_ptr<Test>pTest1 = make_shared<Test>();



    cout << "Finished" << endl;

    return 0;
}
