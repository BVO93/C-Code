#include <iostream>
#include <fstream>
using namespace std;

int main(){

string inFileName = " text.txt";

ifstream inFile;

inFile.open(inFileName);
if(inFile.is_open()){

  string line;
  while(inFile){
    getline(inFile, line);
    cout << line << endl;
  }
    inFile.close();


}else{

  cout << " Cant open the file " << endl;
}
return 0;
}
