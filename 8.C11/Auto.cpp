//
// Created by bjorn on 15.02.20.
//

#include <iostream>
using namespace std;

template <class T>

auto Test(T value)-> decltype(value) {

    return value;
}

int get(){
    return 999;
}

auto Test2() -> decltype(get()){
    return get();
}


int main(){

    //auto val = 7;


    cout << Test("8 ") << endl;


    return  0;

}

