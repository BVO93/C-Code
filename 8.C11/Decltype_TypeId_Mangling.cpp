//
// Created by bjorn on 15.02.20.
//
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

    string value ;

    cout << typeid(value).name() << endl;


    decltype(value) name = "bob";

    cout << name << endl;


    return 0;
}