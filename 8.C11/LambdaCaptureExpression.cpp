//
// Created by bjorn on 06.03.20.
//
#include <iostream>
using namespace std;

int main(){


    int one = 1;
    int two = 2;
    int three = 3;

    //Capture one and two by value
    [one, two ](){cout << one << " " << two <<  endl;}();

    // Capture all local values by value
    [= ](){cout << one << " " << two <<  endl;}();

    // capture three by value
    [=, &three ](){cout << one << " " << two <<  endl;}();


    // Caputre all by reference
    [&](){three=7, two =8; cout << two << endl; }();
    cout << two << endl;

}
