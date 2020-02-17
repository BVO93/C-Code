//
// Created by bjorn on 16.02.20.
//

#include <iostream>
#include "ring.h"
using  namespace std;


int main() {

ring<string> textRing(3);

textRing.add("One");
textRing.add("Two");
textRing.add("Three");
//textRing.add("Four");


for(ring<string>::iterator it = textRing.begin(); it != textRing.end(); it++){
    cout << *it << endl;
}


for(string value : textRing){
    cout << value << endl;
}

for(int  i = 0; i < textRing.size(); i++){

    cout << textRing.get(i) << endl;
}

return 0;

}
