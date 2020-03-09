//
// Created by bjorn on 09.03.20.
//

#include <iostream>
using namespace std;

class  Parent{
    virtual  void speak(){
        cout << "parent " <<endl;

    }
};

class Brother: public  Parent{

};

class Sister: public  Parent{

};
int main(){
        Parent parent;
        Brother brother;

        // we make a pointer to  brother
        // this is not very error proof
        Parent *ppb = &brother;
      //  Brother *pbb = static_cast<Brother *>(ppb);
       // cout << ppb << endl;

       // dynqmic cast checks type at runtime.
       // has to be checked , default on in C11
    Brother *pbb = dynamic_cast<Brother *>(ppb);
    // nullptr is null in c11
    if(ppb == nullptr) {
        cout << "Invalid cast" << endl;
    } else{
        cout << ppb << endl;
    }
        float value = 3.23;

        // static cast replace (int) cast
        cout << static_cast<int>(value) << endl;

        return 0;
}