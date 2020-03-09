//
// Created by bjorn on 08.03.20.
//

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string &test){

    return test.size() == 3;
}

Class Check{
public:
    bool operator() (string &test){
        return test.size() ==5;
    }

}check1;




int main(){

    int size = 5;
    vector<string> vec {"one", "two", "three"};

   int count = count_if(vec.begin(), vec.end(), [size](string test){return test.size() == size;});
    cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check);
    cout << count << endl;

}
