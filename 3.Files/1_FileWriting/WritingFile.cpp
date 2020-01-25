#include <iostream>
#include <fstream>
using namespace std;


int main(){

ofstream outFile;
string outputFileName = " text.txt";

outFile.open(outputFileName);

if(outFile.is_open()){
  outFile << " Hello World " << endl;
  outFile.close();
} else {
  cout << " Could not open file "<< outputFileName << endl;
}
  return 0;
}
