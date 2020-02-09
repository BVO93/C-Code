//
// Created by bjorn on 09.02.20.
//

#include <iostream>
using namespace std;


class Animal {
public:
    virtual void speak() = 0;
    virtual void run() = 0;
};

class Dog: public Animal{
public:
    virtual void speak(){
        cout << " Woof !" << endl;
    }

};

class Labrador: public Dog{
public:
    virtual void run(){
        cout << " Labrador is runnign !" << endl;
    }
};

int main(){

    Dog dog;
    dog.speak();


    return 0;
}