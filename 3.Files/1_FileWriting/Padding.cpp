#include <iostream>
#include<fstream>
using namespace std;

# pragma pack(push, 1)

struct Person {
  char name[50];
  // Better then using string, because string does not know how much to allocate.
  int age;
  double height;

};


int main(){

  Person someone = {"Frodo", 220, 0.8 };
  Person someonElse = {};

// Writing
  string fileName = "test.bin";
  ofstream outputFile;

  outputFile.open(fileName, ios::binary);

  if(outputFile.is_open()){
    outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
    outputFile.close();

} else{

  cout << "Could not open file " + fileName << endl;
}


//Reading
ifstream inFile;

inFile.open(fileName, ios::binary);

if(inFile.is_open()){
  inFile.read(reinterpret_cast<char *>(&someonElse), sizeof(Person));
  inFile.close();

} else{

  cout << "Could not read file " + fileName << endl;
}

cout << someonElse.name << "  " << someonElse.age << "  " << someonElse.height << endl;


  return 0;
}
