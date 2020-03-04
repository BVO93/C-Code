//
// Created by bjorn on 04.03.20.
//

#include <iostream>
using namespace std;

void test(void(*pFunc)()){
    pFunc();

}


int main() {

    auto func = [] () {cout << "Hello " << endl;};


    func();

    test(func);

    return 0;
}