//
// Created by bjorn on 15.02.20.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){

    auto texts = {"one", "Two", "Three"};

    for(auto text: texts){
        cout << text << endl;

    }


    vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(3);
    numbers.push_back(1);

    for(auto number:numbers){
        cout << number << endl;
    }

    return  0;
}

