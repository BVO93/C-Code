#include <iostream>
using namespace std;

void test(int value){
    cout << "Hello" << value  << endl;

}


int main(){

    test(50);

    /*
    void (*pTest)();

    pTest = &test;

    (*pTest)();

     */

    void (*pTest)(int);
    pTest = test;
    pTest(60);



    return 0;
}