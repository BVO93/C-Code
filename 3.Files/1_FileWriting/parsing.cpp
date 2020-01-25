#include <iostream>
#include <fstream>
using namespace std;

int main(){
string filename = "country.txt";
ifstream input;

input.open(filename);

if(!input.is_open()){
    return -1;
}

while(input){
  string line;

  getline(input, line, ':');

  int population;
  input >> population;

  input.get();

  if(!input){
    break;
  }

  cout << line << " -- " << population <<endl;

}

}
