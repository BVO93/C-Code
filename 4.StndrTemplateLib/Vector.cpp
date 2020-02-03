#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<string> strings;

strings.push_back("One");
strings.push_back("Two");
strings.push_back("Three");

for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
  cout << *it << endl;
}


return 0;


}
