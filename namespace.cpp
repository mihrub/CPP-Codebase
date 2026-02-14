#include<iostream>

namespace first {
    int x = 4;
}
namespace second {
    int x =5;
}

int main()
 {
    /* Namespace = provies a solution for preventing name conflicts 
                    in large prohects. Each entity needs a unique name.
                    A namespace allows for indentically named entities 
                    as long as the namespace are different.

    */
   using namespace second;

   std:: cout << x << '\n';
   std:: cout << first:: x << '\n';
   std:: cout << second:: x << '\n';

   return 0;
}