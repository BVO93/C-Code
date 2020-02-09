//
// Created by bjorn on 09.02.20.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool match(string test){

    return test.size() == 3;
}

int countString(vector<string> &texts, bool (*match)(string test)){
    int tally = 0;
    for(int i = 0 ; i < (int)texts.size(); i++){
        if(match(texts[i])){
            tally++;
        }
    }
    return tally;
}


int main(){

    vector<string> texts;
    texts.push_back("One");
    texts.push_back("Two");
    texts.push_back("Three");
    texts.push_back("Four");
    texts.push_back("Five");
    texts.push_back("Six");
    texts.push_back("Seven");
    texts.push_back("Eight");


    // Making own version of count_if
    //cout << count_if(texts.begin(),texts.end(), match) << endl;

cout << countString(texts, match) << endl;

    return 0;
}