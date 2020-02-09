//
// Created by bjorn on 09.02.20.
//

#include <iostream>
using namespace std;

struct Test {
   virtual bool operator()(string &text) = 0 ;

    virtual ~Test(){}; // Implement destruct because of warning.
};


struct MatchTest: Public Test {
   virtual bool operator()(string &text) {
        return text == "lion";
    }
};


void check(string text, Test &test ){
    if(test(text)){
    cout << " text matched " << endl;
    }else{
        cout << " No match" << endl;
    }
}


int main(){

    MatchTest pred;
    string value = "lion";

    cout << pred(value) << endl;

    MatchTest m;
    check("lion", m);

    return 0;
}