#include <iostream>
#include "hello.h"
using namespace std;
void hello() {
   cout << "Hello world!" << endl;
}
void shutUp(int n) {
   for (int i = 0; i < n; i++)
      cout << "Shut up!" << endl;
}

